#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,d;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>d;
        if(d <= 1399)
            cout<<"Division 4"<<endl;
        else if(d >= 1400 && d <= 1599)
            cout<<"Division 3"<<endl;
        else if(d >= 1600 && d <= 1899)
            cout<<"Division 2"<<endl;
        else if(d >= 1900)
            cout<<"Division 1"<<endl;
    }
    return 0;
}
