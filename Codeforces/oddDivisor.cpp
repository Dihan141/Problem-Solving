#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    long long int n;
    cin>>n;

    if(n%2 != 0)
        cout<<"YES"<<endl;
    else
    {
        while(n > 1)
        {
            n = n/2;
            if(n%2 != 0 && n != 1)
            {
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
    }
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