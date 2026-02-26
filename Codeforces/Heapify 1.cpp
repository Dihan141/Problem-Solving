#include <bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin >> n;

    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<bool> visited(n + 1, false);

    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;

        visited[i] = true;

        vector<int> indices;

        int curr = i;

        while (curr <= n)
        {
            indices.push_back(curr);
            curr *= 2;
        }

        vector<int> values;

        for (int j = 0; j < indices.size(); j++)
        {
            values.push_back(v[indices[j]]);
        }

        sort(values.begin(), values.end());

        for (int j = 0; j < indices.size(); j++)
        {
            v[indices[j]] = values[j];
        }
    }

    bool possible = true;

    for (int i = 1; i <= n; i++)
    {
        if (v[i] != i)
            possible = false;
    }

    cout << (possible ? "YES" : "NO") << endl;
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