#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    deque<int> deq;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        deq.push_back(x);
    }

    int i = 1;
    int sumS = 0;
    int sumD = 0;
    while(!deq.empty())
    {
        if(i%2 != 0)
        {
            int front = deq.front();
            int end = deq.back();

            if(front > end)
            {
                deq.pop_front();
                sumS += front;
            }
            else
            {
                deq.pop_back();
                sumS += end;
            }
        }
        else
        {
            int front = deq.front();
            int end = deq.back();

            if(front > end)
            {
                deq.pop_front();
                sumD += front;
            }
            else
            {
                deq.pop_back();
                sumD += end;
            }
        }
        i++;
    }

    cout<<sumS<<" "<<sumD<<endl;
    return 0;
}