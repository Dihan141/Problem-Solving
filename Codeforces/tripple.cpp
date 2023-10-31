#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>n;
        int b[n];
        for(int j=0;j<n;j++)
            cin>>b[j];

        sort(b, b+n);

        int f = 0;

        for(int j=0;j<n;j++)
        {
            if(j+2 < n)
            {
                if(b[j] == b[j+1] && b[j+1] == b[j+2])
                {
                    f = 1;
                    cout<<b[j]<<endl;
                    break;
                }
            }
        }

        if(f==0)
            cout<<"-1"<<endl;
    }
    return 0;
}
