#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n, k;
    cin>>n>>k;

    int ans = (n+k-1)/k;

    if(n%k > 1 || (n%k == 0 && k>1))
        ans++;

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