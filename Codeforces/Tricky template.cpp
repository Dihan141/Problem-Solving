#include<bits/stdc++.h>

using namespace std;

void Solve(){
    int n;
    cin>>n;

    string a, b, c;
    cin>>a>>b>>c;

    bool diffString = false;

    for(int i=0; i<n; i++){
        if(a[i] != c[i] && b[i] != c[i]){
            diffString = true;
            break;
        }
    }

    if(diffString)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main() {
    int t;
    cin>>t;

    while (t--)
    {
        Solve();
    }
    
    return 0;
}