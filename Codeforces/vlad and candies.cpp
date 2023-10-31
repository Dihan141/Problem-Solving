#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int a[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a, a+n);

        if(n==1)
        {
            if(a[n-1]>=2)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else
        {
            if(a[n-1] - a[n-2] >= 2)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    return 0;
}
