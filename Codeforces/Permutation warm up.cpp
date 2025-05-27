#include <bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin >> n;

    int ans = 0;
    int len = 0;

    if (n % 2 == 0)
    {
        len = n / 2;
    }
    else
    {
        len = n / 2 + 1;
    }

    for (int i = 0, j = n - 1; i < len && j >= len; i++, j--)
    {
        ans += abs(i - j);
    }

    cout << ans + 1 << endl;
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