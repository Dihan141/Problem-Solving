#include<bits/stdc++.h>

using namespace std;

void Solve(){
    long long int n;
    cin>>n;

    int c[n], r[n];

    for(int i=0; i<n; i++){
        cin>>r[i];
    }

    for(int i=0; i<n; i++){
        cin>>c[i];
    }
    
    int mn1 = INT_MAX;
    long long int sum1 = 0;
    for(int i=0; i<n; i++){
        mn1 = min(mn1, r[i]);
    }
    for(int i=0; i<n; i++){
        sum1 += (c[i] + mn1);
    }

    int mn2 = INT_MAX;
    long long int sum2 = 0;
    for(int i=0; i<n; i++){
        mn2 = min(mn2, c[i]);
    }
    for(int i=0; i<n; i++){
        sum2 += (r[i] + mn2);
    }

    if(sum1 < sum2)
        cout<<sum1<<endl;
    else
        cout<<sum2<<endl;
}


int main(){
    int t;
    cin>>t;

    while(t--){
        Solve();
    }
    return 0;
}