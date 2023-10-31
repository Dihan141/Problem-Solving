#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    string s1;
    string s2 = "yes";

    cin>>s1;

    s1[0] = tolower(s1[0]);
    s1[1] = tolower(s1[1]);
    s1[2] = tolower(s1[2]);

    if(s1 == s2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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