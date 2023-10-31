#include<bits/stdc++.h>

using namespace std;

int frq[100001];
int dp[100001];
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;

    memset(frq, 0, sizeof(frq));
    memset(dp, 0, sizeof(dp));

    for(int i=0; i<n; i++)
        frq[a[i]]++;

    for(int i=1; i<100001; i++)
        dp[i] = frq[i]+dp[i-1];

    for(int i=0; i<q; i++)
    {
        int k;
        cin>>k;
        if(k<100001)
            cout<<dp[k]<<endl;
        else
            cout<<dp[100000]<<endl;
    }
    return 0;
}