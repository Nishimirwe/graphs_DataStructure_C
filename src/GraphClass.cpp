#include "GraphClass.h"

GraphClass::GraphClass()
{
    //ctor
}

void GraphClass::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}
void GraphClass::BFS(int start)
{
    // BFS traversal use queue data structure
    map<int,bool> visited;
    queue<int> q;
    q.push(start);
    cout<<"This is BFS: ";
    while(q.empty()==false)
    {
        int vertex=q.front();
        q.pop();
        if(!visited[vertex])
        {
            visited[vertex]=true;
            cout<<vertex<<" ";
        }
        list<int>::iterator itr;
        for(itr=adj[vertex].begin();itr!=adj[vertex].end();itr++)
        {
            if(visited.count(*itr)==0)
            {
                q.push(*itr);
            }

        }
    }
    cout<<endl<<endl;
}

void GraphClass::DFS(int start)
{
    // DFS traversal use stack data structure
    map<int,bool> visited;
    stack<int> stk;
    stk.push(start);
    visited[start]=true;
    cout<<"This is DFS: ";
    while(stk.empty()==false)
    {
        int vertex=stk.top();
        cout<<vertex<<" ";
        stk.pop();
        list<int>::iterator itr;
        for(itr=adj[vertex].begin();itr!=adj[vertex].end();itr++)
        {
            if(visited.count(*itr)==0)
            {
                visited[*itr]=true;
                stk.push(*itr);
            }
        }
    }
    cout<<endl<<endl;
}

GraphClass::~GraphClass()
{
    //dtor
}
