#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s = "i don't need anyone";
    map<char, int> mp;

    for(int i=0; i<s.length(); i++)
    {
        if(mp[s[i]] == 0)
            mp[s[i]]++;
        else
            mp[s[i]]++;
    }

    for(auto i = mp.begin(); i!=mp.end(); i++)
    {
        cout<<i->first<<":"<<i->second<<endl;
    }
    return 0;
}