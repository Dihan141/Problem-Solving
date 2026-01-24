#include <bits/stdc++.h>

using namespace std;

void Solve()
{
    int n, h, l;

    cin >> n >> h >> l;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int cnth = 0, cntl = 0;

    if (h > l)
        swap(h, l);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= h)
            cnth++;
        if (arr[i] <= l)
            cntl++;
    }

    cout << min(cnth, cntl / 2) << endl;
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