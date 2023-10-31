#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin>>n;

    string s = to_string(n);
    int len = s.length();

    int cnt = 0;
    for(int i=0; i<len; i++)
    {
        if(s[i] == '0')
            cnt++;
    }

    cout<<len - cnt<<endl;
    for(int i=0; i<len; i++)
    {
        int x = pow(10, len-1-i);
        int y = s[i] - '0';
        if(y*x != 0)
            cout<<y*x<<" ";
    }
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