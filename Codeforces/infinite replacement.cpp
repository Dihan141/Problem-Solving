#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    string s1,s2;
    cin>>s1>>s2;

    int cnta = 0;
    for(int i=0; i<s2.length(); i++)
    {
        if(s2[i] == 'a')
            cnta++;
    }

    if(cnta == 1 && s2.length() == 1)
    {
        cout<<"1"<<endl;
    }
    else if(cnta >= 1 && s2.length() > 1)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        long long int ans = pow(2, s1.length());
        cout<<ans<<endl;
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

    return 0;
}