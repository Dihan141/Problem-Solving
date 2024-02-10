#include<bits/stdc++.h>

using namespace std;

void Solve(){
    int n, k;

    cin >> n >> k;

    string s;

    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            s += (char) ('a' + j);
        }
    }

    cout << s << endl;
}

int main(){
    int t;

    cin >> t;

    while(t--){
        Solve();
    }

    return 0;
}