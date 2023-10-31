#include<bits/stdc++.h>

using namespace std;

void Solve(){
    int arr[10][10] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };

    int sum = 0;
    char inpt;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cin>>inpt;

            if(inpt == 'X'){
                sum += arr[i][j];
            }
        }
    }

    cout<<sum<<endl;

}

int main(){
    int t;
    cin>>t;

    while(t--){
        Solve();
    }
    return 0;
}