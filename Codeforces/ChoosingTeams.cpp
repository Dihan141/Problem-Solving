#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] + k <= 5)
            cnt++;
    }

    if(cnt >= 3)
        cout<<cnt/3<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}