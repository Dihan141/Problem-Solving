#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    string s;
    int p;
    cin>>s>>p;

    map<char,int> mp;
    vector<pair<char, int>> v1;
    vector<int> v2(s.length() + 1, 0);

    int i = 1;
    for(char c = 'a'; c <= 'z'; c++ )
    {
        mp[c] = i;
        i++;
    }

    int sum = 0;
    for(int i=0; i<s.length(); i++)
    {
        sum += mp[s[i]];
        v1.push_back(make_pair(s[i], i));
    }

    if(sum <= p)
    {
        cout<<s<<endl;
    }
    else
    {
        string s1;
        sort(v1.begin(), v1.end());

        if(mp[v1[0].first] > p)
            cout<<s1<<endl;
        else
        {
            int su = 0;

            for(int i=0;;i++)
            {
                su += mp[v1[i].first];

                if(su > p) break;

                v2[v1[i].second] = -1;
            }

            for(int i=0; i<s.length(); i++)
            {
                if(v2[i] == -1)
                    s1 += s[i];
            }

            cout<<s1<<endl;
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