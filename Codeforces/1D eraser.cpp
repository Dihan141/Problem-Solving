#include<bits/stdc++.h>

using namespace std;

void Solve(){
    int n, k;
    string s;

    cin>>n>>k>>s;

    int ans = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'B'){
            ans++;
            i += (k-1);
        }
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