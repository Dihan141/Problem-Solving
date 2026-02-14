#include <bits/stdc++.h>

using namespace std;

void Solve()
{
    long long int p, q;

    cin >> p >> q;

    long long int d = q - p;

    if (d <= 0)
    {
        cout << "Alice" << endl;
        return;
    }

    if (d >= 1)
    {
        if (p >= 2 * d && q >= 3 * d)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
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