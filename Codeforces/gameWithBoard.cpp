#include<bits/stdc++.h>

using namespace std;

void Solve(){
    int n;
    cin>>n;

    if(n<5)
        cout<<"Bob"<<endl;
    else
        cout<<"Alice"<<endl;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        Solve();
    }
    return 0;
}