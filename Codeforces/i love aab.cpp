#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>s;

        int f = 0;
        int ca = 0;
        int cb = 0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='A')
                ca++;
            else
                cb++;

            if(cb > ca)
                f = 1;
        }

        if(s=="A" || s=="B" || f==1 || s[0]=='B' || s[s.length()-1]=='A')
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
