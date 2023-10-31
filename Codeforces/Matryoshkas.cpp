// Include header to use standard library and namesapce 
#include<bits/stdc++.h>
using namespace std;

// Solve function to solve a problem
void Solve()
{
    // n to store number of elements
    int n;
    // Take input of n
    cin>>n;

    // Initialize map for counting frequency of each element
    map<int, int> mp;
    // Integer array to store elements
    int a[n];
    // Loop to take input and store into array along with frequency
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }

    // Sort the elements of the array
    sort(a, a+n);
    // Take min value from array
    int mn = a[0];
    // Take max value from array
    int mx = a[n-1];

    // Counter for number of contiguous numbers found
    int cnt = 0;
    // Loop to iterate through array for non zero frequency
    for(int i=0; i<n; i++)
    {
        if(mp[a[i]] != 0)
        {
            // counter
           
           //decrease the frequency of current number by 1
            mp[a[i]]--;
            // Set j = current number + 1 to check frequency
            int j = a[i]+1;
            // While loop to continue checking while frequency is greater than 0
            while(mp[j] != 0)
            {
                // Decrease the frequnecy of j
                mp[j]--;
                // Increase j to move further
                j++;
            }

        }
    }

    // Print the counter
    cout<<cnt<<endl;
}

// Main function 
int main()
{
    // Number of testcase
    int t;
    // Input number of test cases
    cin>>t;

    // Loop to run test cases
    while(t--)
    {
        // Call solve function
        Solve();
    }
}
