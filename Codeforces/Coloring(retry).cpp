#include<bits/stdc++.h>

using namespace std;

void Solve(){
    int n, m, k;
    cin>>n>>m>>k;

    int a[m];

    for(int i=0; i<m; i++)
        cin>>a[i];

    int res = 0;
    if(n%k == 0)
        res = n/k;
    else
        res = n/k + 1;

    int cnt = 0;
    bool flag = false;
    for(int i=0; i<m; i++){
        if(a[i] == res)
            cnt++;
        if(a[i] > res){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"NO"<<endl;
    }else{
        if(cnt <= (n-1)%k + 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        Solve();
    }
    return 0;
}