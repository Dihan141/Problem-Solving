#include <bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin >> n;

    int arr[n];
    vector<int> dp(n + 1, INT_MAX);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        dp[arr[i]] = 1;
        mp[arr[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (dp[i] == INT_MAX)
        {
            for (int j = 2; j <= sqrt(n); j++)
            {
                if (mp[j] > 0 && i % j == 0 && dp[i / j] != INT_MAX)
                {
                    dp[i] = min(dp[i], 1 + dp[i / j]);
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (dp[i] == INT_MAX)
            cout << -1 << " ";
        else
            cout << dp[i] << " ";
    }

    cout << endl;
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