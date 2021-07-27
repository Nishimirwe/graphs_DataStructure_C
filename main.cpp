#include "GraphClass.h"

int main()
{
    GraphClass graph;
    graph.addEdge(1,2);
    graph.addEdge(1,3);
    graph.addEdge(1,4);
    graph.addEdge(4,3);
    graph.addEdge(4,5);
    graph.addEdge(5,3);
    graph.addEdge(2,3);
    graph.BFS(4);
    graph.DFS(4);
    return 0;
}
