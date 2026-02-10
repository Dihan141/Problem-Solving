#include <bits/stdc++.h>

using namespace std;

void Solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    long long arr[n];
    long long total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        total += (arr[i] / x);
    }

    long long maxMoney = 0;
    for (int i = 0; i < n; i++)
    {
        maxMoney = max(maxMoney, arr[i] + (total - arr[i] / x) * y);
    }

    cout << maxMoney << endl;
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