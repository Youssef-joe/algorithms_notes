#include<iostream>
#include<list>

using namespace std;

#define NUM_V 4

bool helper(list<int> *graph, int u, bool* visited, bool* recStack) {
    visited[u] = true;
    recStack[u] = true;
    list<int>::iterator i;
    for (i = graph[u].begin(); i!=graph[u].end(); ++i) {
        if (recStack[*i]) // if vertice v is found in recursion stack of this DFS traversal
            return true;
        else if (*i==u) //if there's an edge from the vertex to itself
            return true;
        else if (!visited[*i]) {
            if (helper(graph, *i, visited, recStack))
                return true;
        }
    }
    recStack[u] = false;
    return false;
}