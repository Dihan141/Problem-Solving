#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    string s;

    cin>>n>>s;

    map<char, int> mp;

    int cnt = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(mp[s[i]] == 0)
        {
            mp[s[i]]++;
            cnt += 2;
        }
        else
            cnt++;
    }

    cout<<cnt<<endl;
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