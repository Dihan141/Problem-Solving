#include <bits/stdc++.h>
using namespace std;

void Solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int count0 = 0, count1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            count0++;
        else
            count1++;
    }

    int minPair = abs(count0 - count1) / 2;

    if (k < minPair || ((k - minPair) > 0 && (k - minPair) % 2 != 0))
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
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