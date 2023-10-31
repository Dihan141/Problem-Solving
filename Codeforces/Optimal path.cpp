#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n, m;
    cin>>n>>m;

    long long int cnt = (m*(m+1))/2;

    for(int i = m*2; i <= n*m; i+=m)
        cnt += i;

    cout<<cnt<<endl;

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
