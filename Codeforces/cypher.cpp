#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    int m;
    string s;
    for(int i=0; i<n; i++)
    {
        cin>>m>>s;

        for(int j=0; j<s.length(); j++)
        {
            if(s[j] == 'U')
            {
                if(a[i] == 0)
                    a[i] = 9;
                else
                    a[i]--;
            }

            if(s[j] == 'D')
            {
                if(a[i] == 9)
                    a[i] = 0;
                else
                    a[i]++;
            }
        }
    }

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
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