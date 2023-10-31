#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n, x;
    cin>>n>>x;

    int a[2*n];

    for(int i=0; i<2*n; i++)
        cin>>a[i];

    sort(a, a+(2*n));

    int flg = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i+n] - a[i] >= x)
            continue;
        else
            flg = 1;
    }

    if(flg == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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