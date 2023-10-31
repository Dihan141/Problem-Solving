#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;

    for(int j=0; j<t; j++)
    {
        cin>>s;
        int f = 0;

        if(s[s.length()-1]!=s[s.length()-2])
            f = 1;
        else if(s[0]!=s[1])
            f = 1;
        else
        {
            for(int i=0; i<s.length(); i++)
            {
                if(i+2<s.length())
                {
                    if(s[i]!=s[i+1] && s[i+1]!=s[i+2])
                    {
                        f = 1;
                        break;
                    }
                }
            }
        }

        if(f==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
