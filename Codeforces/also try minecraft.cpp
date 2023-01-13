#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,s,t;
    cin>>n>>m;

    int a[n];
    long long int b[n];
    long long int c[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    b[0] = 0;
    for(int i=1; i<n; i++)
    {
        int x = a[i-1] - a[i];
        if(x >= 0)
            b[i] = x + b[i-1];
        else
            b[i] = b[i-1];
    }

    c[n-1] = 0;
    for(int i=n-2; i>=0; i--)
    {
        int x = a[i] - a[i+1];
        if(x < 0)
            c[i] = c[i+1] + x*(-1);
        else
            c[i] = c[i+1];
    }

    for(int i=0; i<m; i++)
    {
        cin>>s>>t;

        long long int ans = 0;
        if(s < t)
            ans = b[t-1] - b[s-1];
        else
            ans = c[t-1] - c[s-1];

        cout<<ans<<endl;
    }
    return 0;
}