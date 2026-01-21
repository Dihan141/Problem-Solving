#include <bits/stdc++.h>
using namespace std;

int minNodeSum = INT_MAX;
vector<int> cycle, path;
vector<vector<int>> cycleList;

vector<vector<int>> createAdjMatrix(vector<int> &v, int n)
{
    vector<vector<int>> adjMat(n + 1, vector<int>());

    int i = 0, j = 1;

    while (i < v.size() && j < v.size())
    {
        // cout << "i: " << v[i] << " j: " << v[j] << endl;
        adjMat[v[i]].push_back(v[j]);
        i += 2;
        j += 2;
    }

    return adjMat;
}

void dfsCycle(vector<vector<int>> &adjMat, vector<bool> &visited, int node)
{
    // cout << node << " ";
    visited[node] = true;
    path.push_back(node);

    for (int i : adjMat[node])
    {
        if (visited[i])
        {
            for (int j = path.size() - 1; j >= 0; j--)
            {
                cycle.push_back(path[j]);

                if (path[j] == i)
                    break;
            }

            sort(cycle.begin(), cycle.end());
            cycleList.push_back(cycle);
            cycle.clear();
        }
        else
        {
            dfsCycle(adjMat, visited, i);
        }
    }

    visited[node] = false;
    path.pop_back();
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    cin >> n >> m;
    vector<int> v;

    int x;
    while (cin >> x)
    {
        v.push_back(x);
    }

    vector<vector<int>> adjMat = createAdjMatrix(v, n + 1);
    vector<bool> visited;

    for (int i = 1; i <= n; i++)
    {
        visited.assign(n + 1, false);
        dfsCycle(adjMat, visited, i);
    }

    int pos = 0;
    for (int i = 0; i < cycleList.size(); i++)
    {
        int sum = 0;
        for (int j : cycleList[i])
        {
            sum += j;
        }

        if (sum < minNodeSum)
        {
            pos = i;
        }
    }

    for (int i : cycleList[pos])
    {
        cout << i << " ";
    }
    return 0;
}
