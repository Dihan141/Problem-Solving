#include<bits/stdc++.h>

using namespace std;

void Sol()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    int cnt = 0;
    for(int i=n-2; i>=0; i--)
    {
        while(a[i]>=a[i+1] && a[i]>0)
        {
            a[i] = a[i]/2;
            cnt++;
        }
        if(a[i]==a[i+1])
        {
            cout<<"-1"<<endl;
            return;
        }
    }

    cout<<cnt<<endl;
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
