#include <bits/stdc++.h>

using namespace std;

bool DFS(vector<vector<int>> &adjV, vector<bool> &visited, int node, int dest)
{
    if (node == dest)
        return true;

    visited[node] = true;
    for (int i = 0; i < adjV[node].size(); i++)
    {
        if (!visited[adjV[node][i]])
            if (DFS(adjV, visited, adjV[node][i], dest))
                return true;
    }

    return false;
}

void Solve()
{
    int n;
    cin >> n;

    vector<vector<char>> v(n);

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < n; j++)
        {
            char x;
            cin >> x;
            v[i].push_back(x);
        }

    map<int, pair<int, int>> mp;

    int cnt = 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < n; j++)
        {
            mp[cnt] = make_pair(i, j);
            cnt++;
        }

    vector<vector<int>> adjV(cnt);

    for (int i = 0; i < cnt; i++)
    {
        int first = mp[i].first;
        int second = mp[i].second;

        if ((first + second) % 2 != 0)
        {
            if (v[first][second] == '<')
                adjV[i].push_back(i - 1);
            else
                adjV[i].push_back(i + 1);
        }
        else
        {
            if (first == 0 && second == 0)
            {
                adjV[i].push_back(i + 1);
                adjV[i].push_back(i + n);
            }
            else if (first == 1 && second == n - 1)
            {
                adjV[i].push_back(i - 1);
                adjV[i].push_back(i - n);
            }
            else if (first == 1 && second == 0)
            {
                adjV[i].push_back(i + 1);
                adjV[i].push_back(i - n);
            }
            else if (first == 0 && second == n - 1)
            {
                adjV[i].push_back(i - 1);
                adjV[i].push_back(i + n);
            }
            else
            {
                adjV[i].push_back(i - 1);
                adjV[i].push_back(i + 1);

                if (first == 0)
                    adjV[i].push_back(i + n);
                else
                    adjV[i].push_back(i - n);
            }
        }
    }

    vector<bool> visited(cnt, false);

    if (DFS(adjV, visited, 0, cnt - 1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Solve();
    }
    return 0;
}