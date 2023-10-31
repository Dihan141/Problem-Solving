#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];

    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    queue<int> que1, que2, que3;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i] == 1)
        {
            cnt1++;
            que1.push(i+1);
        }
        if(a[i] == 2)
        {
            cnt2++;
            que2.push(i+1);
        }
        if(a[i] == 3)
        {
            cnt3++;
            que3.push(i+1);
        }
    }

    int mn1 = min(cnt1, cnt2);
    int mn = min(mn1, cnt3);

    cout<<mn<<endl;
    for(int i=0; i<mn; i++)
    {
        cout<<que1.front()<<" "<<que2.front()<<" "<<que3.front()<<endl;
        que1.pop();
        que2.pop();
        que3.pop();
    }
}