#include <bits/stdc++.h>

using namespace std;

void Solve()
{
    int n, w;
    cin >> n >> w;

    int ans = n - n / w;

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