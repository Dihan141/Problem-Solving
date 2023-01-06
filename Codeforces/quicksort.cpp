#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n, k;
    cin>>n>>k;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    vector<int> v;

    int flg = 0;
    int num = 0;
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == 1)
        {
            flg = 1;
            num = 2;
            cnt++;
        }

        if(flg)
        {
            if(a[i] == num)
            {
                num++;
                cnt++;
            }
        }
    }

    double ans = (double) (n - cnt)/k;
    cout<<ceil(ans)<<endl;
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