#include<bits/stdc++.h>
#include "../Graph.h"
using namespace std;
void DFS(int vertex, vector<bool>&visited, unordered_map<int,list<int>>&adjList){
    if(visited[vertex]){
        return;
    }
    visited[vertex] = true;
    for(int v : adjList[vertex]){
        if(!visited[v]){
            DFS(v,visited,adjList);
        }
    }
}
int main(){
    int vertices = 5;
    
    Graph g(vertices);
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);

    return 0;
}