#include<bits/stdc++.h>

using namespace std;

void Solve(){
    int arr[10][10];

    for(int i=0; i<5; i++){
        for(int j=i; j<10-i; j++)
            arr[i][j] = i+1;

        for(int j=i; j<10-i; j++)
            arr[j][i] = i+1;

        for(int j=i; j<10-i; j++)
            arr[10-i-1][j] = i+1;
        
        for(int j=i; j<10-i; j++)
            arr[j][10-i-1] = i+1;
    }

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
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