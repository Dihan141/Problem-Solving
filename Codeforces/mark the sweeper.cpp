#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    long long int n;
    cin>>n;

    long long int a[n];

    for(long long int i=0; i<n; i++)
        cin>>a[i];

    long long int ans = 0;
    long long int pos = 0;
    int flg = 0;
    for(long long int i=0; i<n; i++)
    {
        if(a[i] != 0)
        {
            flg = 1;
            pos = i;
            break;
        }
    }

    for(long long int i=pos; i<n-1; i++)
    {
        if(a[i] == 0 && flg == 1)
            ans++;
        else
            ans += a[i];
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        Solve();
    }

    return 0;
}