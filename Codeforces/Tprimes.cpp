#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if(n <= 1) return false;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        long long int x;
        cin>>x;

        long long int sqr = sqrt(x);
        if(sqr*sqr == x)
        {
            if(isPrime(sqr))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}