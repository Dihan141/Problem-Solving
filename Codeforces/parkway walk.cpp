#include<bits/stdc++.h>
using namespace std;

void Solve()
{
    int m, n;
    cin>>n>>m;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] <= m)
            m -= a[i];
        else
        {
            cnt += (a[i]-m);
            m = 0;
        }
    }

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
