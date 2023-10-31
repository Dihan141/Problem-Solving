#include<bits/stdc++.h>

using namespace std;

void Sol()
{
    int n, m;
    cin>>n>>m;

    int a[n][m];

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>a[i][j];

    int mx = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int ans = 0;
            int i1 = i;
            int j1 = j;

            while(i1<n && j1<m)
            {
                ans += a[i1][j1];
                i1++;
                j1++;
            }

            i1 = i;
            j1 = j;
            while(i1>=0 && j1>=0)
            {
                ans += a[i1][j1];
                i1--;
                j1--;
            }

            i1 = i;
            j1 = j;
            while(i1<n && j1>=0)
            {
                ans += a[i1][j1];
                i1++;
                j1--;
            }

            i1 = i;
            j1 = j;
            while(i1>=0 && j1<m)
            {
                ans += a[i1][j1];
                i1--;
                j1++;
            }

            ans -= (3 * a[i][j]);
            mx = max(mx, ans);
        }
    }

    cout<<mx<<endl;
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
