#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin>>n;

    int a[n+1];
    for(int i=0; i<n; i++)
        cin>>a[i];

    if(a[n-1]%2 == 0)
        a[n] = 1;
    else
        a[n] = 2;
    
    int cnt = 0;
    int ans = 0;
    for(int i=1; i<=n; i++)
    {
        cnt++;
        if(a[i]%2 == 0 && a[i-1]%2 != 0)
        {
            ans += (cnt-1);
            cnt = 0;
        }
        if(a[i]%2 != 0 && a[i-1]%2 == 0)
        {
            ans += (cnt-1);
            cnt = 0;
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