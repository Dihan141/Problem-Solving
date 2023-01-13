#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n, m;
    cin>>n>>m;

    int a[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            a[i][j] = 0;
    }

    for(int i=0; i<n; i+=3)
    {
        for(int j=0; j<m; j+=4)
        {
            a[i][j] = 1;
        }
    }

    for(int i=0; i<n; i+=3)
    {
        for(int j=3; j<m; j+=4)
        {
            a[i][j] = 1;
        }
    }


    for(int i=1; i<n; i+=3)
    {
        for(int j=1; j<m; j+=4)
        {
            a[i][j] = 1;
        }
    }

    for(int i=2; i<n; i+=3)
    {
        for(int j=1; j<m; j+=4)
        {
            a[i][j] = 1;
        }
    }

    for(int i=1; i<n; i+=3)
    {
        for(int j=2; j<m; j+=4)
        {
            a[i][j] = 1;
        }
    }

    for(int i=2; i<n; i+=3)
    {
        for(int j=2; j<m; j+=4)
        {
            a[i][j] = 1;
        }
    }


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout<<a[i][j]<<" ";
        
        cout<<endl;
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