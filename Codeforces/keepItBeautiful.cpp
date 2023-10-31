#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int q;
    cin>>q;
    int a[q];

    string ans;

    for(int i=0; i<q; i++)
        cin>>a[i];

    int prev = 0;
    bool sorted = true;
    for(int i=0; i<q; i++)
    {
        if(a[i] >= prev)
        {
            if(sorted)
            {
                prev = a[i];
                ans += '1';
            }
            else
            {
                if(a[i] <= a[0])
                {
                    prev = a[i];
                    ans += '1';
                }
                else
                    ans += '0';
            }
        }
        else
        {
            if(sorted)
            {
                if(a[i] <= a[0])
                {
                    sorted = false;
                    prev = a[i];
                    ans += '1';
                }
                else
                    ans += '0';
            }
            else
                ans += '0';
        }
    }

    cout<<ans<<endl;
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