#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    int flg = 0;

    for(int i=1; i<n; i++)
    {
        if(a[i] - a[i-1] == 1)
            cnt1++;
        else if(a[i] - a[i-1] == 2)
            cnt2++;
        else if(a[i] - a[i-1] == 3)
            cnt3++;
        else
            flg = 1;
    }

    if(cnt1 == n-1)
        cout<<"YES"<<endl;
    else if(cnt2 <= 2 && cnt3 == 0 && cnt2 != 0 && flg == 0)
        cout<<"YES"<<endl;
    else if(cnt3 == 1 && cnt2 == 0 && flg == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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