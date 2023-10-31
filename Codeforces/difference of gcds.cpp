#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n, l, r;
    cin>>n>>l>>r;

    int a[n];

    int flg = 0;
    for(int i=0; i<n; i++)
    {
        int x = i+1;

        int y = r/x;

        int z = x + (y-1)*x;

        if(z >= l && z <= r)
            a[i] = z;
        else
        {
            flg = 1;
            break;
        }
    }

    if(flg == 0)
    {
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    else
        cout<<"NO"<<endl;
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