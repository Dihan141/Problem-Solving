#include<bits/stdc++.h>

using namespace std;

int tree[16];

int query(int i){
       int sum=0;
       while(i>0){
             sum+=tree[i];
             i -= i & (-i);
       }
       return sum;
}


//n size of the array
//x number to add
void update(int i, int x, int n)
{
       while(i<=n)
       {
             tree[i]+=x;
             i += i & (-i);
       }
}

int main()
{
    return 0;
}