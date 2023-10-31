#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n, m, k;
    cin>>n>>m>>k;

    int a[m];
    for(int i=0; i<m; i++)
        cin>>a[i];

    int d = n/k;
    int r = n%k;
    int flg1 = 0;
    int flg2 = 0;

    for(int i=0; i<m; i++)
    {
        if(a[i] <= d)
            flg1++;
        if(a[i] == d)
            flg2++;
    }

    if(r == 0)
    {
        if(flg2 <= k && (flg1+flg2) >= m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
    {
        if(flg2 <= r && (flg1+flg2) >= m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;       
    }
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