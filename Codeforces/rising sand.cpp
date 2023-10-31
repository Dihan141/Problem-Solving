#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n,k;
    cin>>n>>k;

    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    int cnt = 0;
    if(k == 1)
    {
        if(n%2 != 0)
            cnt = n/2;
        else
            cnt = (n/2) - 1;
    }
    else
    {
        for(int i=1; i<n; i++)
        {
            if(a[i]>a[i-1] + a[i+1] && (i+1)<n)
            {
                cnt++;
            }
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