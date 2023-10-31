#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin>>n;

    long long int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int mn = a[0];
    long long int mx = 0;
    int pos = 0;

    for(int i=0; i<n; i++)
    {
        if(a[i] < mn)
        {
            mn = a[i];
            pos = i;
        }

        mx = max(mx, a[i]);
    }

    a[pos] = 0;

    int i=0;
    long long int mx1 = 0;
    while(a[i] != 0)
    {
        mx1 = max(mx1, a[i]);
        i++;
    }

    if(pos != 0 && pos != n-1)
        mx1 -= mn;
    mx1 += mx;

    if(mx1 > mx)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
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