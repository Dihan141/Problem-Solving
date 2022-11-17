#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    stack<char> stck;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'Q') stck.push('Q');
        else
        {
            if(!stck.empty()) stck.pop();
        }
    }

    if(stck.empty()) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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