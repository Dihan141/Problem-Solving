#include <bits/stdc++.h>
using namespace std;

void Solve()
{
    int n;

    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int num = n;
    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != num)
        {
            l = i;
            break;
        }
        num--;
    }

    if (l != -1)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == num)
            {
                r = i;
            }
        }
    }

    reverse(arr + l, arr + r + 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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