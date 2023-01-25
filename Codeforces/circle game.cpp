#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    if(n%2 != 0)
        cout<<"Mike"<<endl;
    else
    {
        int mn1 = a[0];
        int pos1 = 0;
        int mn2 = a[1];
        int pos2 = 1;
        for(int i=0; i<n; i+=2)
        {
            if(a[i] < mn1)
            {
                mn1 = a[i];
                pos1 = i;
            }
        }
        for(int i=1; i<n; i+=2)
        {
            if(a[i] < mn2)
            {
                mn2 = a[i];
                pos2 = i;
            }
        }

        if(mn1 > mn2)
            cout<<"Mike"<<endl;
        else if(mn1 < mn2)
            cout<<"Joe"<<endl;
        else
        {
            if(pos1 < pos2)
                cout<<"Joe"<<endl;
            else
                cout<<"Mike"<<endl;
        }
    }
    
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
