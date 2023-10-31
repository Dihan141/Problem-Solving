#include<bits/stdc++.h>

using namespace std;

void Solve(){
    long long int n, k;
    long long int x;

    cin>>n>>k>>x;

    long long int mn = (k*(k+1))/2;

    long long int mx = (n*(n+1))/2 - ((n-k)*(n-k+1))/2;

    if(x < mn || x > mx)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        Solve();
    }
    return 0;
}