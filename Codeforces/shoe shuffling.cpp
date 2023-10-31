#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    vector<int> ans(n);
    for(int i=0; i<n; i++)
    {
        if(a[i] == a[i+1] && (i+1)<n)
        {
            if(ans[i]==0)
                ans[i] = i+1;
            ans[i+1] = i+2;

            int tmp = ans[i];
            ans[i] = ans[i+1];
            ans[i+1] = tmp;
        }
        else
        {
            continue;
        }
    }

    int cnt = count(ans.begin(), ans.end(), 0);

    if(cnt != 0)
        cout<<"-1"<<endl;
    else
    {
        for(int i=0; i<n; i++)
            cout<<ans[i]<<" ";
        cout<<endl;
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