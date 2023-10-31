#include<bits/stdc++.h>

using namespace std;


void Solve(int tcase)
{
    int n,q;
    vector<int> v;
    cin>>n>>q;

    int arr[n+1];
    arr[0] = 0;
    for(int i=1; i<=n; i++)
        cin>>arr[i];
    
    int tree[n+1] = {0};

    for(int i=1; i<=n; i++)
    {
        int j = i;
        while(j <= n)
        {
            tree[j] += arr[i];
            j += j & (-j);
        }
    }

    while(q--)
    {
        int a, b, c;
        cin>>a>>b;

        if(a == 1)
        {
            v.push_back(arr[b+1]);
            int j = b+1;
            int d = (-1)*arr[b+1];
            arr[b+1] = 0;
            while(j <= n)
            {
                tree[j] += d;
                j += j & (-j);
            }
        }
        if(a == 2)
        {
            cin>>c;
            int j = b+1;
            arr[j] = arr[j] + c;
            while(j <= n)
            {
                tree[j] += c;
                j += j & (-j);
            }
        }
        if(a == 3)
        {
            cin>>c;
            int sum1=0;
            int sum2 = 0;
            int j = c+1;
            int k = b;
            while(j>0)
            {
                sum1+=tree[j];
                j -= j & (-j);
            } 

            while(k>0)
            {
                sum2+=tree[k];
                k -= k & (-k);
            } 

            v.push_back(sum1 - sum2);
        }
    }

    cout<<"Case "<<tcase<<":"<<endl;;
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<endl;
}

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        Solve(i);
    }
    return 0;
}