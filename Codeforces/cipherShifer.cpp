#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    string s, ans;
    cin>>n>>s;

    int i=0, j=1;

    for(j=1; j<s.length(); j++)
    {
        if(s[i] == s[j])
        {
            ans += s[i];
            i = j+1;
            j += 1;
        }
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