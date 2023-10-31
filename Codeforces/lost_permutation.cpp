#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int m, s;
    map<int, int> mp;
    vector<int> v;
    cin>>m>>s;

    int a[m];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        v.push_back(a[i]);
    } 

    int sum = 0;
    int f = 0;
    for(int i=1; i<=50; i++)
    {
        if(mp[i] == 0) 
        {
            sum += i;
            mp[i]++;
            v.push_back(i);
        }
        if(sum == s)
        {
            f = 1;
            break;
        }
        if(sum > s) break;
    }

    if(f == 1)
    {
        int f1 = 0;
        int mx = 0;
        for(int i=0; i<v.size(); i++)
            mx = max(mx, v[i]);

        for(int i=1; i<=mx; i++)
        {
            if(mp[i] == 0)
            {
                f1 = 1;
                break;
            }
        }

        if(f1 == 1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        Solve();
    }
    
    return 0;
}