#include <bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin >> n;

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 67)
        {
            found = true;
        }
    }

    cout << (found ? "YES" : "NO") << endl;
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