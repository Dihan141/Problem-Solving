#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    int ans;
    int flg = 0;
    for(int i=1; i<n; i++)
    {
        int xr = a[0];
        for(int j=1; j<n; j++)
        {
            if(j==i) continue;

            xr = xr^a[j];
        }

        for(int j=0; j<n; j++)
        {
            if(xr == a[j])
                flg = 1;
        }

        if(flg == 1)
        {
            ans = xr;
            break;
        }
    }
    if(flg == 0)
    {
        int ans = a[1];
        for(int i=2;i<n;i++)
        {
            ans = ans^a[i];
        }
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