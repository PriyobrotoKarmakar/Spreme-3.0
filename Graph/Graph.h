#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
using namespace std;

class Graph {
public:
    unordered_map<int, list<int>> adjList;
    int numVertices;

public:
    Graph(int vertices) {
        numVertices = vertices;
    }

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // For undirected graph
    }

    void printGraph() {
        for (auto i : adjList) {
            cout << i.first << ": ";
            for (auto j : i.second) {
                cout << j << ", ";
            }
            cout << endl;
        }
    }

};

#endif // GRAPH_H