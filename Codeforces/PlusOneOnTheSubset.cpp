#include<bits/stdc++.h> 
//The line above include  library which provides various useful common functions used in various algorithms.

using namespace std; 
//This uses the standard namespace, which includes input/output functions and other standard basic algorithms and data structures.

void Solve()
{
    int n;
    cin>>n;  //Taking input for the size of the array.

    int a[n]; //Declaring the array size of n. 
    for(int i=0; i<n; i++) //Taking input for each element of the array. 
        cin>>a[i];

    sort(a, a+n); //Using sort function to sort the elements in ascending order. 
    int mn = a[0]; //The minimum element in the array. 
    int mx = a[n-1]; //The maximum element in the array. 

    cout<<mx-mn<<endl; //Printing out the difference between the maximum and minimum element. 
}

int main()
{
    int t;
    cin>>t; //Taking the number of test cases as the input. 

    while (t--) //Running a loop for the number of test cases. 
    {
        Solve(); //Calling the Solve function to solve the problem. 
    }
    return 0; //Returning a zero as the program is successful. 
}
