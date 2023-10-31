//include the standard library
#include<bits/stdc++.h>

//declare the namespace
using namespace std;

//define the Solv() function
void Solve(){
    //declare the variable n
    int n;
    //store n from input
    cin>>n;
    //declare array of vectors
    vector<int> v[n];
    //loop to store the elements in the array
    for(int i=0; i<n; i++) {
        //declare a vector
        vector<int> in;
        //loop to take input and store it in vector
        for(int j=0; j<n-1; j++) {
            //declare x and store it in vector
            int x;
            cin>>x;
            in.push_back(x);
        }
        //store vector in array
        v[i] = in;
    }

    //declare first, val1, val2, last
    int first = 0;
    int val1 = 0;
    int val2 = 0;
    int last = 0;
    //declare the map
    map<int, int> mp;
    //loop through vector array
    for(int i=0; i<n; i++) {
        //store the value of the first element in map
        mp[v[i][0]]++;
    }

    //loop through 1 to n
    for(int i=1; i<=n; i++) {
        //expand as explained
        if(mp[i] > val1) {
            val1 =  mp[i];
            first = i;
        }
    }

    //declare another map
    map<int, int> mp1;
    //loop through the vector array again
    for(int i=0; i<n; i++) {
        //store the value of last element in the map
        mp1[v[i][n-2]]++;
    }

    //loop through 1 to n
    for(int i=1; i<=n; i++) {
        //expand as explained
        if(mp1[i] > val2) {
            val2 = mp1[i];
            last = i;
        }
    }

    //loop through vector array again
    for(int i=0; i<n; i++) {
        //expand as explained
        if(v[i][0] != first && v[i][n-2] == last) {
            cout<<first<<" ";
            //loop through the n-1 element
            for(int j = 0; j<n-1 j++)
                //print each element
                cout<<v[i][j]<<" ";
            cout<<endl;
            //exit the function
            return;
        }
        //expand as explained
        if(v[i][0] == first && v[i][n-2] != last) {
            //loop through the n-1 element
            for(int j = 0; j<n-1; j++)
                //print each element
                cout<<v[i][j]<<" ";
            //print the value of last
            cout<<last<<endl;
            //exit the function
            return;
        }
    }
}

//main function
int main() {
    //declare t 
    int t;
    //take input
    cin>>t;

    //loop until t
    while (t--) {
        //call Solve function
        Solve();
    }
    return 0;
}
