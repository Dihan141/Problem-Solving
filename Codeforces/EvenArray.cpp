#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin>>n;

    int a[n];
    int odds = 0;
    int evens = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2 == 0) evens++;
        else odds++;
    }

    if(n/2 == odds)
    {
        int notInPlaceOdds = 0;
        for(int i=0; i<n; i++)
        {
            if(i%2 == 0 && a[i]%2 != 0)
                notInPlaceOdds++;
        }
        cout<<notInPlaceOdds<<endl;
    }
    else
        cout<<"-1"<<endl;
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