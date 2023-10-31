#include<bits/stdc++.h>

using namespace std;

class Graph{
    int vertices;
    list<int>* adj;
    list<int>* cost;
    bool* visited;

    public:
    Graph(int v)
    {
        vertices = v;
        adj = new list<int>[vertices];
        cost = new list<int>[vertices];
    }

    void addEdge(int src, int dest, int c)
    {
        adj[src].push_back(dest);
        adj[dest].push_back(src);
        cost[src].push_back(c);
        cost[dest].push_back(c);
    }

    void BFS(int start)
    {
        visited = new bool[vertices];

        for(int i=0; i<vertices; i++)
            visited[i] = false;

        queue<int> que;
        visited[start] = true;
        que.push(start);

        list<int>:: iterator i;

        int total = 0;
        while(!que.empty())
        {
            int curr = que.front();
            cout<<"Visited "<<curr<<endl;
            que.pop();

            for(i = adj[curr].begin(); i!=adj[curr].end(); i++)
            {
                int adjvertex = *i;
                if(!visited[adjvertex])
                {
                    visited[adjvertex] = true;
                    que.push(adjvertex);
                }
            }
        }
    }
};


int main()
{
    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int n,m;
        cin>>n>>m;
        Graph g(n);

        while(m--)
        {
            int a, b, c;
            cin>>a>>b>>c;
            g.addEdge(a, b, c);
        }

        int home;
        cin>>home;

        g.BFS(0);
    }
    return 0;
}