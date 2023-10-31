#include<bits/stdc++.h>

using namespace std;

void Solve(){
    long long int n;
    cin>>n;

    long long int ans = n;
    while(n != 1){
        n = n/2;
        ans += n;
    }

    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        Solve();
    }

    return 0;
}