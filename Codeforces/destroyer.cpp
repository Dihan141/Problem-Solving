#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin>>n;
    map<int, int> mp;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }

    bool rightOrder = true;
    for(int i=0; i<n; i++)
    {
        if(a[i] != 0)
        {
            if(mp[a[i]-1] > 0)
            {
                mp[a[i]-1]--;
            }
            else
            {
                rightOrder = false;
                break;
            }
        }
    }

    if(rightOrder)
        cout<<"YES"<<endl;
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