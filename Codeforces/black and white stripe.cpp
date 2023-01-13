#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;

    int cnt = 0;
    for(int i=0; i<k; i++)
    {
        if(s[i] == 'W')
            cnt++;
    }

    int ans = cnt;

    for(int i=0; i<s.length(); i++)
    {
        if((i+k) < n)
        {
            if(s[i] == 'W') cnt--;
            if(s[i+k] == 'W') cnt++;
        }   

        ans = min(ans, cnt);
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