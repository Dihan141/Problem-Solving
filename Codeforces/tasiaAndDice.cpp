#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n, s, r;
    cin>>n>>s>>r;
    if(r%(n-1) == 0)
    {
        for(int i=0; i<n-1; i++)
            cout<<r/(n-1)<<" ";
        cout<<s-r<<endl;
        return;
    }

    int rem = r%(n-1);
    int div = r/(n-1);
    int mx = s-r;
    int a[n-1];
    for(int i=0; i<n-1; i++)
        a[i] = div;

    int i = 0;
    while(rem>0)
    {
        if(a[i]+1<=mx)
        {
            a[i] += 1;
            rem--;
            i++;
        }
        if(i == n-1)
            i = 0;
    }

    for(int i=0; i<n-1; i++)
        cout<<a[i]<<" ";
    cout<<mx<<endl; 
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