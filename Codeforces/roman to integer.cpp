#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int cnt = 0;
    for(int i = s.length()-1; i>=0; i--)
    {
        if(s[i] == 'I')
        {
            cnt++;
        }

        if(s[i] == 'V')
        {
            cnt += 5;
            if(s[i-1] == 'I' && (i-1)>=0)
            {
                cnt--;
                i--;
            }
        }

        if(s[i] == 'X')
        {
            cnt += 10;
            if(s[i-1] == 'I' && (i-1)>=0)
            {
                cnt--;
                i--;
            }
        }

        if(s[i] == 'L')
        {
            cnt += 50;
            if(s[i-1] == 'X' && (i-1)>=0)
            {
                cnt -= 10;
                i--;
            }
        }

        if(s[i] == 'C')
        {
            cnt += 100;
            if(s[i-1] == 'X' && (i-1)>=0)
            {
                cnt -= 10;
                i--;
            }
        }

        if(s[i] == 'D')
        {
            cnt += 500;
            if(s[i-1] == 'C' && (i-1)>=0)
            {
                cnt -= 100;
                i--;
            }
        }

        if(s[i] == 'M')
        {
            cnt += 1000;
            if(s[i-1] == 'C' && (i-1)>=0)
            {
                cnt -= 100;
                i--;
            }
        }
    }

    cout<<cnt<<endl;
    return 0;
}
