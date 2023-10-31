#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin>>n;

    string sa[n];
    string ans;
    map<string, int> mp;

    for(int i=0; i<n; i++)
        cin>>sa[i];

    for(int i=0; i<n; i++)
    {
        mp[sa[i]]++;
    }

    for(int i=0; i<n; i++)
    {
        string s = sa[i];

        int flg = 0;
        for(int j=1; j<s.length(); j++)
        {
            string s1, s2;

            for(int k=0; k<j; k++)
                s1 += s[k];

            for(int k=j; k<s.length(); k++)
                s2 += s[k];

            if(mp[s1]>0 && mp[s2]>0)
            {
                flg = 1;
                break;
            }
        }

        if(flg == 1)
            ans += '1';
        else
            ans += '0';
    }
    cout<<ans<<endl;
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