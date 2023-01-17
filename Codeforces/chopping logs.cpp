#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>n;
        int a[n];

        int c = 0;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]!=1)
                c += (a[j]-1);
        }

        if(c%2 != 0)
            cout<<"errorgorn"<<endl;
        else
            cout<<"maomao90"<<endl;
    }
    return 0;
}
