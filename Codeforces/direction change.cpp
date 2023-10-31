#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,m;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>n>>m;
        if(n==m)
        {
            cout<<(n+m)-2<<endl;
        }
        else if(n==1 || m==1)
        {
            if(n<=2 && m<=2)
                cout<<"1"<<endl;
            else
                cout<<"-1"<<endl;
        }
        else
        {
            int x = max(n,m);
            int y = min(n,m);

            int z = x-y;

            if(z%2 == 0)
                cout<<(y-1)*2 + z*2<<endl;
            else
                cout<<(y-1)*2 + z*2 -1<<endl;
        }

    }
    return 0;
}
