#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        if(n%4 == 0)
        {
            int x = n/4;
            cout<<x<<" "<<x<<" "<<x<<" "<<x<<endl;
        }
        else
        {
            n = n-2;
            if(n%2 == 0)
            {
                int x = n/2 + 1;
                int y = n/2 - 1;
                for(int i=0;;i++)
                {
                    if((x%2!=0 && x%3!=0 && x%5!=0 && x%7!=0) || (y%2!=0 && y%3!=0 && y%5!=0 && y%7!=0))
                        break;
                    else
                    {
                        x++;
                        y--;
                    }
                }
                cout<<x<<" "<<y<<" "<<"1 "<<"1 "<<endl;
            }
            else
            {
                int x = n/2;
                int y = x + 1;
                cout<<x<<" "<<y<<" "<<"1 "<<"1"<<endl;
            }
        }
    }
    return 0;
}
