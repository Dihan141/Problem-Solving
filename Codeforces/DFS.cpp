#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int graph[n][n];

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>graph[i][j];

    stack<int> stck;
    bool visited[n];

    for(int i=0; i<n; i++)
        visited[i] = false;

    stck.push(0);
    visited[0] = true;

    while(!stck.empty())
    {
        int curr = stck.top();
        stck.pop();

        cout<<curr<<" ";
        for(int i=n-1; i>=0; i--)
        {
            if(graph[curr][i] == 1 && !visited[i])
            {
                stck.push(i);
                visited[i] = true;
            }
        }
    }
    return 0;
}