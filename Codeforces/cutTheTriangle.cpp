#include<bits/stdc++.h>

using namespace std;

void Solve()
{
    pair<int, int> p1, p2, p3;
    cin>>p1.first>>p1.second;
    cin>>p2.first>>p2.second;
    cin>>p3.first>>p3.second;

    if(p1.second == p2.second && p2.first == p3.first || p3.second == p1.second && p1.first == p2.first || p2.second == p3.second && p3.first == p1.first)
        cout<<"NO"<<endl;
    else if(p1.first == p2.first && p2.second == p3.second || p2.first == p3.first && p3.second == p1.second || p3.first == p1.first && p1.second == p2.second)
        cout<<"NO"<<endl;
    else if(p1.first == p3.first && p3.second == p2.second || p2.first == p1.first && p1.second == p3.second || p3.first == p2.first && p2.second == p1.second)
        cout<<"NO"<<endl;
    else if(p1.second == p2.second && p1.first == p3.first || p2.second == p3.second && p2.first == p1.first || p3.second == p1.second && p3.first == p2.first)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Solve();
    }
    return 0;
}