#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }

        vector<int> v1;
        for(int i=1; i<n; i++)
        {
            v1.push_back(abs(v[i]-v[i-1]));
        }

        sort(v1.begin(), v1.end());
        int ans = 0;
        for(int i=0; i<n-k; i++)
        {
            ans += v1[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}