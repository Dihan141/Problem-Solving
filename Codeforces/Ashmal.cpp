#include <bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;

    cin >> n;

    string s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    string ans = s[0];
    for (int i = 1; i < n; i++)
    {
        string temp1 = ans + s[i];
        string temp2 = s[i] + ans;

        if (temp1 <= temp2)
        {
            ans = temp1;
        }
        else
        {
            ans = temp2;
        }
    }

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