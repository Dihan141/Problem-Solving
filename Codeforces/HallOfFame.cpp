#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    string s;
    cin>>n;
    cin>>s;

    int cntL = 0;
    int cntR = 0;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'L') cntL++;
        if(s[i] == 'R') cntR++;
    }

    if(cntL == n || cntR == n)
        cout<<"-1"<<endl;
    else
    {
        if(s[0] == 'R' && s[n-1] == 'L' || s[0] == 'L' && s[n-1] == 'L' || s[0] == 'R' && s[n-1] == 'R')
            cout<<"0"<<endl;
        else
        {
            int ans;
            for(int i=0;i<s.length();i++)
            {
                if(s[i] == 'R')
                {
                    ans = i;
                    break;
                }
            }
            cout<<ans<<endl;
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
}