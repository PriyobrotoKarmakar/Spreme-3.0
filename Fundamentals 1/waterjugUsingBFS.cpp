#include <iostream>
#include <queue>
#include <set>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;


const int jug1_capacity = 4;
const int jug2_capacity = 3;
const pair<int, int> goal_state = {2, 0};
const pair<int, int> start_state = {0, 0};

bool is_valid(int jug1, int jug2) {
    return (jug1 >= 0 && jug1 <= jug1_capacity) && (jug2 >= 0 && jug2 <= jug2_capacity);
}


vector<pair<int, int>> solve_water_jug_problem(pair<int, int> start_state) {
    queue<pair<int, int>> q;                
    set<pair<int, int>> visited;           
    map<pair<int, int>, pair<int, int>> parent; // Map to trace the path

    q.push(start_state);
    visited.insert(start_state);
    parent[start_state] = {-1, -1}; // Initialize parent of start state

    while (!q.empty()) {
        pair<int, int> current_state = q.front();
        q.pop();

        int jug1 = current_state.first;
        int jug2 = current_state.second;

        // If goal state is reached, reconstruct the path
        if (current_state == goal_state) {
            vector<pair<int, int>> path;
            while (current_state != make_pair(-1, -1)) {
                path.push_back(current_state);
                current_state = parent[current_state];
            }
            reverse(path.begin(), path.end());
            return path;
        }

        // Generate all possible moves from the current state
        vector<pair<int, int>> possible_moves = {
            {jug1_capacity, jug2},                                     // Fill Jug1
            {jug1, jug2_capacity},                                     // Fill Jug2
            {0, jug2},                                                 // Empty Jug1
            {jug1, 0},                                                 // Empty Jug2
            {max(0, jug1 - (jug2_capacity - jug2)), min(jug2_capacity, jug1 + jug2)}, // Pour Jug1 -> Jug2
            {min(jug1_capacity, jug1 + jug2), max(0, jug2 - (jug1_capacity - jug1))}  // Pour Jug2 -> Jug1
        };

        for (auto next_state : possible_moves) {
            if (is_valid(next_state.first, next_state.second) && visited.find(next_state) == visited.end()) {
                q.push(next_state);
                visited.insert(next_state);
                parent[next_state] = current_state;
            }
        }
    }

    return {}; // Return empty path if no solution exists
}

int main() {
    // Solve the problem and print the solution path
    vector<pair<int, int>> solution = solve_water_jug_problem(start_state);

    if (!solution.empty()) {
        cout << "Solution path:" << endl;
        for (auto step : solution) {
            cout << "(" << step.first << ", " << step.second << ")" << endl;
        }
    } else {
        cout << "No solution exists." << endl;
    }

    return 0;
}
