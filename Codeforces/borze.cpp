#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, ans;
    cin>>s;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='-' && s[i+1]=='.')
        {
            ans += '1';
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='-')
        {
            ans += '2';
            i++;
        }    
        else if(s[i]=='.')
            ans += '0';
        else
            continue;
    }

    cout<<ans<<endl;
    return 0;;
}