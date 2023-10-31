#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    string s, s1;
    cin>>s;

    for(int i=0; i<20; i++)
        s1 += "Yes";

    int l = 0;
    int r = s.length() - 1;

    int f = 0;
    for(int i=0; i<s1.length(); i++)
    {
        string s2;
        if(l < s1.length() && r<s1.length())
        {
            for(int j=l; j<=r; j++)
            {
                s2 += s1[j];
            }
            l++;
            r++;

            if(s == s2) f = 1;
        }
    }

    if(f == 1) cout<<"YES"<<endl;
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
    
}