#include <bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;

    cin >> n;
    int a[n];
    vector<int> v;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    bool flag = true;
    v.push_back(a[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > v[v.size() - 1])
        {
            int first = a[i] / 10;
            int second = a[i] % 10;

            if (first <= v[v.size() - 1] && second <= v[v.size() - 1])
            {
                v.push_back(second);
                v.push_back(first);
            }
            else
            {
                flag = false;
                break;
            }
        }
        else
            v.push_back(a[i]);
    }

    for (int i = v.size() - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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