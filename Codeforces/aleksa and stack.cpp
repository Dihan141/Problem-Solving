#include<bits/stdc++.h>

using namespace std;

void Solve(){
    int n;
    cin>>n;

    int ans[n];

    ans[0] = n+1;
    ans[1] = n+2;

    for(int i=2; i<n; i++){
        ans[i] = ans[i-1] + 1;
        while((3*ans[i])%(ans[i-1]+ans[i-2]) == 0){
            ans[i]++;
        }
    }

    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        Solve();
    }
    return 0;
}