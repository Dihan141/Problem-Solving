#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>n;
        int a[n+1];
        int b[51] = {0};

        for(int j=1;j<=n;j++)
            cin>>a[j];

        int count1 = 0;
        for(int j=1;j<=n;j++)
        {
            if(a[j]%2 == 0)
            {
                b[j] = 1;
                count1++;
            }
        }

        if(count1==0 || count1==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            int f = 1;
            for(int j=1;j<=n;j++)
            {
                if(j+1 <= n)
                {
                    if((a[j]%2==0 && a[j+1]%2==0) || (a[j]%2!=0 && a[j+1]%2!=0))
                        f = 0;
                }
            }

            if(f==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }

    }
    return 0;
}
