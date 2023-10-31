#include<bits/stdc++.h>

using namespace std;

void Sol()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    int _min = a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]<_min)
            _min = a[i];
    }

    int ans = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>_min)
        {
            ans += (a[i]-_min);
        }
    }

    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        Sol();
    }
    return 0;
}
