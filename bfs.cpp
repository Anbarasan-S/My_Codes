#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
#define V 7
void BFS(int source,int graph[][V])
{
    queue<int> q;
    bool *visited=new bool[V];
    int v;
    for(v=0;v<=V;v++)
    {
        visited[v]=false;
    }
    visited[source]=true;
    q.push(source);
    cout<<"********************BFS********************\n";
    while(!q.empty())
    {
        int s=q.front();
        q.pop();
        cout<<s<<" ";
        for(v=0;v<V;v++)
        {

            if(!visited[v]&&graph[s][v])
            {
                visited[v]=true;
                q.push(v);
            }
        }
    }

}
int main()
{
    int graph[][V]={
                {0,0,0,0,0,0,0},
                {0,0,1,1,0,0,0},
                {0,1,0,0,1,1,0},
                {0,1,0,0,0,1,0},
                {0,0,1,0,0,1,1},
                {0,0,1,1,1,0,1},
                {0,0,0,0,1,1,0},
    };
    BFS(1,graph);
    return 0;
}
