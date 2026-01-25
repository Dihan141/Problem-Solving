#include <bits/stdc++.h>
using namespace std;

void Solve()
{
    long long int n, x;
    cin >> n >> x;

    long long int arr[n][3];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
        if (arr[i][1] > 1)
        {
            x -= (arr[i][0] * (arr[i][1] - 1));
        }
    }

    if (x <= 0)
    {
        cout << 0 << endl;
        return;
    }

    long long maxDist = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxDist = max(maxDist, (arr[i][0] * arr[i][1] - arr[i][2]));
    }

    if (maxDist <= 0)
    {
        cout << -1 << endl;
        return;
    }

    long long int res = x % maxDist != 0 ? (x / maxDist) + 1 : x / maxDist;

    cout << res << endl;
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