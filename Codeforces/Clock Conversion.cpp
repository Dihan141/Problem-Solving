#include <bits/stdc++.h>

using namespace std;

void Solve()
{
    string s, ans, amOrpm;
    cin >> s;

    int hh = (s[0] - '0') * 10 + (s[1] - '0');
    int mm = (s[3] - '0') * 10 + (s[4] - '0');

    if (hh < 12)
    {
        amOrpm = " AM";
    }
    else
    {
        hh -= 12;
        amOrpm = " PM";
    }

    if (hh == 0)
        ans += "12";
    else
    {
        if (hh < 10)
            ans += '0';
        ans += to_string(hh);
    }

    ans += ':';

    if (mm < 10)
        ans += '0';

    ans += to_string(mm);
    ans += amOrpm;

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