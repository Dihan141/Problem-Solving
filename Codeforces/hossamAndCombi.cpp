#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a, a+n);
    int min = a[0];
    int max = a[n-1];
    long long int cntM = 0;
    long long int cntMx = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == min) cntM++;
        if(a[i] == max) cntMx++;
    }

    long long int ans = 0;
    if(max != min)
        ans = 2*cntM*cntMx;
    else
        ans = cntM*(cntM-1);
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