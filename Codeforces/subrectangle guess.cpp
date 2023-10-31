#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n, m;
    cin>>n>>m;

    int a[n][m];

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>a[i][j];

    int mx = a[0][0];
    int x = 0, y = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j] > mx)
            {
                mx = a[i][j];
                x = i;
                y = j;
            }
        }
    }

    int cnt[4] = {0};

    for(int i=0; i<=x; i++)
    {
        for(int j=0; j<=y; j++)
        {
            cnt[0]++;
        }
    }

    for(int i=x; i<n; i++)
    {
        for(int j=0; j<=y; j++)
        {
            cnt[1]++;
        }
    }

    for(int i=0; i<=x; i++)
    {
        for(int j=y; j<m; j++)
        {
            cnt[2]++;
        }
    }

    for(int i=x; i<n; i++)
    {
        for(int j=y; j<m; j++)
        {
            cnt[3]++;
        }
    }

    int mxx = 0;
    for(int i=0; i<4; i++)
    {
        if(cnt[i] > mxx)
            mxx = cnt[i];
    }

    cout<<mxx<<endl;
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
