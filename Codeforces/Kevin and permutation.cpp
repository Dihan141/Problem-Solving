#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin>>n;

    int a[n];
    vector<int> v;
    for(int i=0; i<n; i++)
        a[i] = i+1;

    int x = n/2;
    for(int i=x; i>0; i--)
    {
        if((i+x) < n)
        {
            v.push_back(a[i]);
            v.push_back(a[i+x]);
        }
    }

    if(n % 2 != 0) v.push_back(a[0]);
    else
    {
        v.push_back(a[0]);
        v.push_back(a[x]);
    }

    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
    
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