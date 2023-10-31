#include<bits/stdc++.h>

using namespace std;

void Solve(){
    int n, k;
    cin>>n>>k;
    map<int, int> mp;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        mp[a[i]]++;
    }

    if(mp[k] != 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        Solve();
    }
}