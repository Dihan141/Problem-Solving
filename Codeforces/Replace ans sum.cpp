#include <bits/stdc++.h>
using namespace std;

void Solve()
{
    int n, q;

    cin >> n >> q;

    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        if ((a[i] - b[i]) < 0)
            a[i] = b[i];
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] > a[i - 1])
            a[i - 1] = a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        a[i + 1] += a[i];
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        if (l - 1 == 0)
        {
            cout << a[r - 1] << " ";
        }
        else
        {
            cout << a[r - 1] - a[l - 2] << " ";
        }
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