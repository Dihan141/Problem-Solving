#include<bits/stdc++.h>
using namespace std;

void Solve(){
    int n;
    cin>>n;

    int s[n], e[n];

    for(int i=0; i<n; i++){
        cin>>s[i]>>e[i];
    }

    bool flag = false;
    for(int i=1; i<n; i++){
        if(s[i] >= s[0] && e[i] >= e[0]){
            flag = true;
            break;
        }
    }

    if(flag)
        cout<<"-1"<<endl;
    else
        cout<<s[0]<<endl;
}

int main(){
    int n;
    cin>>n;

    while(n--){
        Solve();
    }
    return 0;
}