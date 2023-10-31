#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;

    if(n < 0)
    {
        string s = to_string(n);
        int len = s.length();
        int last = s[len-1] - '0';
        int blast = s[len-2] - '0';

        if(last > blast)
            s.pop_back();
        else
            s.erase(len-2, 1);
        
        if(s.length() == 2 && s[1] == '0')
            cout<<"0"<<endl;
        else
            cout<<s<<endl;
    }
    else
        cout<<n<<endl;
    return 0;
}