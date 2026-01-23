#include <bits/stdc++.h>
using namespace std;

string Solve()
{
    int n;
    cin >> n;

    int arr[n];

    int cnt0 = 0, cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] == 0)
            cnt0++;
        if (arr[i] == 1)
            cnt1++;
    }

    if (cnt0 == n || cnt0 == 0)
        return "NO";

    if (cnt0 >= 2 && cnt1 == 0)
        return "NO";

    return "YES";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cout << Solve() << endl;
    }

    return 0;
}