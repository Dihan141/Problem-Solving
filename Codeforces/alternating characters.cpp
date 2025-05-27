#include <bits/stdc++.h>

using namespace std;

void Solve()
{
    string s;
    cin >> s;

    int countA = 0;
    int countB = 0;
    int countTotal = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            countA++;
            if (countB != 0)
            {
                countTotal += (countB - 1);
                countB = 0;
            }
        }
        else
        {
            countB++;
            if (countA != 0)
            {
                countTotal += (countA - 1);
                countA = 0;
            }
        }
    }

    if (countA == s.length() || countB == s.length())
    {
        cout << s.length() - 1 << endl;
    }
    else
    {
        cout << countTotal << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        Solve();
    }
    return 0;
}