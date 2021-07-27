#ifndef GRAPHCLASS_H
#define GRAPHCLASS_H

#include<iostream>
#include<list>
#include<stack>
#include<queue>
#include<map>

using namespace std;

class GraphClass
{
    public:
        GraphClass();
        void addEdge(int v,int w);
        void BFS(int start);
        void DFS(int start);
        virtual ~GraphClass();
    private:
        map<int,list<int>> adj;
};

#endif // GRAPHCLASS_H
