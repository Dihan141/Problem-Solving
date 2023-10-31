#include<bits/stdc++.h>

using namespace std;

int graph[1000][1000];
bool visited[1000];
int nodes;

void DFS(int start)
{
    visited[start] = true;

    cout<<start<<" ";
    for(int i=0; i<nodes; i++)
    {
        if(graph[start][i] && !visited[i])
        {
            DFS(i);
        }
    }
}

int main()
{
    int n;
    cin>>n;

    nodes = n;
    for(int i=0; i<nodes; i++)
        visited[i] = false;

    for(int i=0; i<nodes; i++)
        for(int j=0; j<nodes; j++)
            cin>>graph[i][j];

    DFS(0);
    return 0;
}