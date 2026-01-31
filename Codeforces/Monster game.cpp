#include <bits/stdc++.h>
using namespace std;

void Solve()
{
    int n;
    cin >> n;

    long long int arr1[n], arr2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    int level = 0;
    int levelCnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (level + arr2[i] > n)
            break;
        level += arr2[i];
        levelCnt++;
    }

    sort(arr1, arr1 + n, greater<int>());

    long long int maxScore = INT_MIN;

    int k = 0;

    for (int i = 0; i < levelCnt; i++)
    {
        k += arr2[i];
        maxScore = max(maxScore, (i + 1) * arr1[k - 1]);
    }

    cout << maxScore << endl;
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