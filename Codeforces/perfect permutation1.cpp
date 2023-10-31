#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin>>n;

    int a[n];

    if(n==1)
        a[0] = 1;
    else if(n == 2)
    {
        a[0] = 2;
        a[1] = 1;
    }
    else if(n==3)
    {
        a[0] = 2;
        a[1] = 3;
        a[2] = 1;
    }
    else
    {
        a[0] = 2;
        a[1] = 1;
        a[n-1] = 3;

        for(int i=2; i<n-1; i++)
        {
            a[i] = i+2;
        }
    }

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";

    cout<<endl;
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