#include <bits/stdc++.h>
using namespace std;

void Solve()
{
    int n, s, x;
    cin >> n >> s >> x;

    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum > s)
    {
        cout << "NO" << endl;
        return;
    }

    if ((s - sum) % x == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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