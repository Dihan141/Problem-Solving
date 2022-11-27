#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    
    int mx = 0;

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            int s = b*i + c*j;
            int r = (n - s)/a;

            if((a*r + s) == n && r >= 0)
            {
                mx = max(mx, (i+j+r));
            }
        }
    }

    cout<<mx<<endl;
    return 0;
}