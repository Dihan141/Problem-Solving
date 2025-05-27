#include <bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
        mp[a[i]]++;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] > 1)
        {
            mp[a[i]] = 0;
            ans++;
        }
    }

    cout << ans << endl;
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