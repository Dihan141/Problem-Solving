#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    string s;
    cin>>s;

    map<char, int> mp;

    int cnt = 0;
    int cntdays = 1;
    for(int i=0; i<s.length(); i++)
    {
        if(mp[s[i]] == 0)
        {
            mp[s[i]]++;
            cnt++;

            if(cnt > 3)
            {
                cntdays++;
                cnt = 0;
                mp.clear();
                i--;
            }
        }
    }

    cout<<cntdays<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        Solve();
    }
}