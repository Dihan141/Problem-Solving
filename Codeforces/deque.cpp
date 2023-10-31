#include<bits/stdc++.h>

using namespace std;

void Solve(int tcase)
{
    int n,m;
    cin>>n>>m;
    int y = n;
    deque<int> dq;
    cout<<"Case "<<tcase<<":"<<endl;
    while(m--)
    {
        string s;
        int x;
        cin>>s;

        if(s == "pushLeft")
        {
            cin>>x;
            if(n == 0)
                cout<<"The queue is full"<<endl;
            else
            {
                dq.push_front(x);
                cout<<"Pushed in left: "<<x<<endl;
                n--;
            }
        }
        if(s == "pushRight")
        {
            cin>>x;
            if(n == 0)
                cout<<"The queue is full"<<endl;
            else
            {
                dq.push_back(x);
                cout<<"Pushed in right: "<<x<<endl;
                n--;
            }
        }
        if(s == "popLeft")
        {
            if(n == y)
                cout<<"The queue is empty"<<endl;
            else
            {
                int z = dq.front();
                dq.pop_front();
                cout<<"Popped from left: "<<z<<endl;
                n++;
            }
        }
        if(s == "popRight")
        {
            if(n == y)
                cout<<"The queue is empty"<<endl;
            else
            {
                int z = dq.back();
                dq.pop_back();
                cout<<"Popped from right: "<<z<<endl;
                n++;
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        Solve(i);
    }
    return 0;
}