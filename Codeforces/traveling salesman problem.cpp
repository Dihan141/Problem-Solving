#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;

    cin>>n;

    int mnx = 0;
    int mxx = 0;
    int mny = 0;
    int mxy = 0;
    for(int i=0; i<n; i++)
    {
        int x, y;
        cin>>x>>y;

        mnx = min(mnx, x);
        mny = min(mny, y);
        mxx = max(mxx, x);
        mxy = max(mxy, y);
    }

    cout<<mxx*2 + mnx*2*(-1) + mxy*2 + mny*2*(-1)<<endl;

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