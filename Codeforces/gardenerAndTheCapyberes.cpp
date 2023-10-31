#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    string s, s1, s2, s3, s4, s5, s6;
    cin>>s;
    int n = s.length();
    s1 = s[0];
    s2 = s[1];
    s3 = s[n-1];
    s4 = s[n-2];

    for(int i=2; i<n; i++)
        s5 += s[i];

    for(int i=0; i<n-2; i++)
        s6 += s[i];

    if(s2 >= s1 && s2>=s5 || s2 <= s1 && s2 <= s5)
        cout<<s1<<" "<<s2<<" "<<s5<<endl;
    else if(s4 >= s6 && s4 >= s3 || s4 <= s6 && s4 <= s3)
        cout<<s6<<" "<<s4<<" "<<s3<<endl;
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