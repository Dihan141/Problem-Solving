#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin>>n;

    string s = to_string(n);
    int len = s.length();
    int add = s[0] - '0';

    cout<<9*(len - 1) + add<<endl;
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