#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, x, y, t;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c>>x>>y;

        int f1 = 0;
        int f2 = 0;

        int cfl = a-x;
        int dfl = b-y;

        if(cfl<0)
        {
            c = c + cfl;
            if(c<0)
                f1 = 1;
        }
        if(dfl<0)
        {
            c = c + dfl;
            if(c<0)
                f2 = 1;
        }

        if(f1==1 || f2==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
