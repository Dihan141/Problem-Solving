#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int m, s;
    cin>>m>>s;

    vector<int> v;
    map<int, int> mp;
    int mx = 0;
    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        mp[x]++;
        mx = max(mx, x);
    }

    int sum = 0;
    int flg = 0;
    for(int i=1;; i++)
    {
        if(sum == s)
        {
            flg = 1;
            break;
        }
        if(sum > s) break;

        if(mp[i] == 0)
        {
            sum += i;
            v.push_back(i);
            mx = max(i, mx);
        }
    }

    if(flg)
    {
        if(mx == v.size())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
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