#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    string pi = "314159265358979323846264338327";
    string s;
    cin>>s;
    int cnt = 0;
    for(int i=0; i<pi.length(); i++)
    {
        if(s[i] == pi[i])
            cnt++;
        else
        {
            cout<<cnt<<endl;
            return;
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        Solve();
    }
    
    return 0;
}