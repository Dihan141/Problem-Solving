#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n, k;
    cin>>n>>k;
    k = min(k, 30);
    int ans = min(n+1, 1<<k);
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