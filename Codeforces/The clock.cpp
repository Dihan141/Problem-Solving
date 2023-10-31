#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    map<string, int> mp;
    int h, m, x;
    char c;
    cin>>h>>c>>m>>x;

    int hx = x/60;
    int mx = x%60;

    int cnt = 0;
    for(int i=0; i<1440; i++)
    {
        h += hx;
        m += mx;

        if(m >= 60)
        {
            m = m%60;
            h += 1;
        } 
        if(h >= 24)
        {
            h = h%24;
        }

        string hh = to_string(h);
        string mm = to_string(m);

        string hs, ms, hhmm;
        if(hh.size() == 1)
        {
            hs += "0";
        }
        if(mm.size() == 1)
        {
            ms += "0";
        }

        hs += hh;
        ms += mm;
        hhmm += hs;
        hhmm += ms;

        reverse(ms.begin(), ms.end());

        if(mp[hhmm] != 0) break;

        if(hs == ms)
        {
            cnt++;
            mp[hhmm]++;
        }
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