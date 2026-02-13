#include <bits/stdc++.h>

using namespace std;

long long digitSum(long long n)
{
    long long sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void Solve()
{
    long long n;
    cin >> n;

    int cnt = 0;
    for (int i = n; i <= n + 81; i++)
    {
        if ((i - digitSum(i)) == n)
            cnt++;
    }

    cout << cnt << endl;
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