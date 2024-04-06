#include <bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin >> n;

    if (n % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        string ans;
        int cnt = 0;

        while (n != 0)
        {
            if (cnt == 2)
            {
                ans += 'B';
                cnt = 0;
            }
            else
            {
                n--;
                cnt++;
                ans += 'A';
            }
        }

        cout << "YES" << endl;
        cout << ans << endl;
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