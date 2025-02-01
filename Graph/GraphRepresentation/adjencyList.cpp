#include<bits/stdc++.h>
using namespace std;
class Graph{
    private:
    int numVertices;
    unordered_map<int, list<int>> adjList;
    public:
    Graph(int vertices){
        numVertices = vertices;
    }
    void addEdge(int u,int v){
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    void printList(){
        for(auto i:adjList){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};
int main() {
    int vertices = 5;
    Graph g(vertices);
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    cout << "Adjacency List:" << endl;
    g.printList();
    return 0;
}