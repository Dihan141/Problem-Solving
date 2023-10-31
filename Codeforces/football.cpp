#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;
    int d = 0;
    cin>>n>>a>>b;

    vector<pair<int, int>> v;

    if(n == 1)
    {
        if(a == b) d = 1;
        else d = 0;

        v.push_back(make_pair(a, b));
    }
    else if(n > a+b)
    {
        d = n - (a+b);
        for(int i=0; i<a; i++)
            v.push_back(make_pair(1, 0));
        
        for(int i=0; i<b; i++)
            v.push_back(make_pair(0,1));

        for(int i=a+b; i<=n; i++)
            v.push_back(make_pair(0, 0));
    }
    else
    {
        if(a == 0)
        {
            for(int i=0; i<n; i++)
            {
                v.push_back(make_pair(0, 1));
                b--;
            }
            v[n-1].second += b;
        }
        else if(b == 0)
        {
            for(int i=0; i<n; i++)
            {
                v.push_back(make_pair(1, 0));
                a--;
            }
            v[n-1].first += a;
        }
        else
        {
            v.push_back(make_pair(1, 0));
            v.push_back(make_pair(0, 1));

            a--;
            b--;
            int x = n;
            x -= 2;

            while(x > 0 && a > 0)
            {
                v.push_back(make_pair(1, 0));
                a--;
                x--;
            }

            while(x > 0 && b > 0)
            {
                v.push_back(make_pair(0, 1));
                b--;
                x--;
            }

            v[0].first += a;
            v[1].second += b;
        }
    }

    cout<<d<<endl;
    for(int i=0; i<n; i++)
        cout<<v[i].first<<":"<<v[i].second<<endl;
    return 0;
}