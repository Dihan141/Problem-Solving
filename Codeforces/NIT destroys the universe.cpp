#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    int l = 0, r = 0;
    int flg = 0;

    for(int i=0; i<n; i++)
    {
        if(a[i] != 0)
        {
            l = i;
            flg = 1;
            break;
        }
    }

    for(int i=n-1; i>=0; i--)
    {
        if(a[i] != 0)
        {
            r = i;
            break;
        }
    }

    int flg1 = 0;
    if(flg == 1)
    {
        for(int i=l; i<=r; i++)
        {
            if(a[i] == 0)
            {
                flg1 = 1;
            }
        }

        if(flg1 == 1)
            cout<<"2"<<endl;
        else
            cout<<"1"<<endl;
    }
    else
        cout<<"0"<<endl;
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