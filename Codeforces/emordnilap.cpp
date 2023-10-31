#include<bits/stdc++.h>

using namespace std;

vector<int> facts;

void Solve()
{
    long long  n;
    cin>>n;
    if(n == 1)
    {
        cout<<"0"<<endl;
        return;
    }

    long long int ans = (n*(n-1))%1000000007;
    ans = (ans * facts[n-1])%1000000007;
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;

    long long int f = 1;
    for(int i=1; i<=100005; i++)
    {
        f = (f*i)%1000000007;
        facts.push_back(f);
    }

    while(t--)
    {
        Solve();
    }
    return 0;
}