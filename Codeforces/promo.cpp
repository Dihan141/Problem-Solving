#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin>>n>>q;

    int a[n];
    vector<long long int> sum(n+1);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a, a+n);
    long long int s = 0;
    for(int i=0; i<n; i++)
    {
        s += a[i];
        sum[i] = s;
    }
    sum.insert(sum.begin(), 0);

    for(int i=0; i<q; i++)
    {
        long long int x, y;
        cin>>x>>y;

        long long int ans = sum[(n-x) +y] - sum[n-x];
        cout<<ans<<endl;
    }
    return 0;
}