#include<bits/stdc++.h>

using namespace std;

void Sol()
{
    int n, m;
    cin>>n>>m;
    string s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }

    int minn = 1000000000;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            string c1 = s[i];
            string c2 = s[j];

            int diff = 0;
            for(int k=0; k<m; k++)
            {
                diff+=abs(c1[k]-c2[k]);
            }
            if(diff<minn)
                minn = diff;
        }
    }

    cout<<minn<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Sol();
    }
    return 0;
}
