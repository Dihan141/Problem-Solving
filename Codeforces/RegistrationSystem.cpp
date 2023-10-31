#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    string s;
    map<string, int> mp;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(mp[s] == 0)
        {
            cout<<"OK"<<endl;
            mp[s]++;
        }
        else
        {
            cout<<s<<mp[s]<<endl;
            mp[s]++;
        }

    }
 
    return 0;
}