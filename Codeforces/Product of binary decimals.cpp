#include <bits/stdc++.h>

using namespace std;

vector<int> v;

bool evaluate(int n)
{
    if (n == 0)
        return false;
    if (n == 1)
        return true;

    for (int i = 1; i < v.size(); i++)
    {
        if (n == v[i])
            return true;
    }

    for (int i = 1; i < v.size(); i++)
    {
        if (n % v[i] == 0)
            return evaluate(n / v[i]);
    }

    return false;
}

void Solve()
{
    int n;
    cin >> n;

    bool flag = evaluate(n);

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= 100000; i++)
    {
        if (i == 1)
            v.push_back(i);
        else
        {
            string num = to_string(i);
            bool decimalFlag = true;
            for (int j = 0; j < num.length(); j++)
            {
                if (num[j] != '0' && num[j] != '1')
                    decimalFlag = false;
            }

            if (decimalFlag)
                v.push_back(i);
        }
    }

    while (t--)
    {
        Solve();
    }

    return 0;
}