#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, l;
    cin>>n>>l;

    long double a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a, a+n);
    long double mx = a[0];
    for(int i=1; i<n; i++)
    {
        long double x = a[i] - a[i-1];
        mx = max(mx, x/2);
    }
    long double ans = max(mx, l-a[n-1]);
    cout<<fixed<<setprecision(10)<<ans<<endl;
    return 0;
}