// This program checks a given sequence of characters for 
// any repeated characters and prints YES or NO according 
// to the outcome
#include<bits/stdc++.h>

using namespace std;

void Solve() 
{
    // declare and read in size of sequence
    int n;
    cin>>n;

    // declare and read in sequence
    string s;
    cin>>s;

    // declare empty map to save count of characters
    map<char, int> mp;

    // loop through all characters of the sequence
    for(int i=0; i<s.length(); i++)
    {
        // increase count of each character in map
        mp[s[i]]++;

        // if any character appears more than once
        if(mp[s[i]] > 1)
        {
            // check if repeated character is not the same as previous one
            if(s[i] != s[i-1])
            {
                // print NO and terminate program 
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    // print YES when not any of above conditions is true
    cout<<"YES"<<endl;
}

int main()
{
    // declare loop counter and read it in
    int t;
    cin>>t;
    
    // repeat loop t times
    while(t--)
    {
        // call function to solve problem
        Solve();
    }
    return 0;
}
