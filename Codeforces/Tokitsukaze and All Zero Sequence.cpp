#include<bits/stdc++.h>

using namespace std;

void Sol()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a, a+n);

    int cnt = 0;
    int f = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==0)
            cnt++;
    }

    if(cnt > 0)
        cout<<n-cnt<<endl;
    else
    {
        for(int i=0; i<n-1; i++)
        {
            if(a[i]==a[i+1])
                f = 1;
        }
        if(f==0)
            cout<<n+1<<endl;
        else
            cout<<n<<endl;
    }
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
