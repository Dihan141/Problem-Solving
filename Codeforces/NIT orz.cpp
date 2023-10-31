#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    long long int z;
    cin>>n>>z;

    long long int a[n];
    long long int za[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    long long int mx = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] > mx)
            mx = a[i];
    }

    long long int mxans = mx | z;
    for(int i=0; i<n; i++)
    {
        int tmp = a[i];
        a[i] = a[i] | z;
        z = tmp & z;
        za[i] = z;
    }

    for(int i=0; i<n; i++)
    {
        if((za[i] | mx) > mxans)
            mxans = mx | za[i];
    }

    cout<<mxans<<endl;
}

void Sol()
{
    int a, b;
    cin>>a>>b;
    cout<<(a & b)<<endl;
    cout<<(a | b)<<endl;
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