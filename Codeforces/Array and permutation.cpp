#include <bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin >> n;

    vector<int> p(n), a(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        mp[p[i]] = i;
    }
    for (int i = 0; i < n; i++)
        cin >> a[i];

    string ok = "YES";
    for (int i = 0; i < n - 1; i++)
    {
        if (mp[a[i]] > mp[a[i + 1]])
        {
            ok = "NO";
            break;
        }
    }

    cout << ok << endl;
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