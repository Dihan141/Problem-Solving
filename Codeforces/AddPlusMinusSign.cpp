#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    char ans[n-1];
    for(int i=0; i<n-1; i++)
        ans[i] = '0';

    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '1')
            cnt++;
    }

    int cnt1 = 0;
    if(cnt%2 == 0) cnt = cnt/2;
    else cnt = (cnt-1)/2;

    for(int i=n-1; i>=0; i--)
    {
        if(ans[i-1] != '-' && (i-1) >= 0)
        {
            if(cnt1 == cnt) break;
            if(s[i] == '1') 
            {
                ans[i-1] = '-';
                cnt1++;
            }
        }
    }

    for(int i=0; i<n-1; i++)
    {
        if(ans[i] != '-')
            ans[i] = '+';
    }
    
    for(int i=0; i<n-1; i++)
        cout<<ans[i];
    
    cout<<endl;
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