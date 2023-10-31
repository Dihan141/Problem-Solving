#include<bits/stdc++.h>
using namespace std;

class Dynamic_Array
{
public:
    int Size;
    int Capacity;
    int *arr;
    Dynamic_Array()
    {
        Size = 0;
        Capacity = 1;
        arr = new int[Capacity];
    }
    int Get(int i)
    {

        if ((i < 0 ) or (i >= Size))
        {
            cout << "Index out of Range" << endl;
            return -1;
        }
        return arr[i];

    }
    void Set(int i,int val)
    {
        if ((i < 0 ) or (i >= Size))
        {
            cout << " Index out of Range" << endl;
            return;
        }
        arr[i] = val;

    }
    void PushBack(int val)
    {
        if(Size == Capacity)
        {
            int *new_arr = new int[2*Capacity];
            for(int i=0; i<Size; i++)
            {
                new_arr[i] = arr[i];
            }
            delete(arr);
            arr = new_arr;
            Capacity *= 2;
        }
        arr[Size] = val;
        Size++;
    }
    int Get_Size()
    {
        return Size;
    }
    int Get_Capacity()
    {
        return Capacity;
    }
    void Remove(int i)
    {
        //implement the Remove Method
        if(i<0 || i>=Size)
        {
            cout<<"Index out of range"<<endl;
            return;
        }
        Size--;
        for(int j=i; j<Size; j++)
        {
            arr[j] = arr[j+1];
        }
    }


};

void Increment_One(Dynamic_Array da)
{
    int c = 0;
    for(int i=da.Get_Size()-1; i>=0; i--)
    {
        if(c == 1)
        {
            da.Set(i, da.Get(i)+1);
            if(da.Get(i) == 10)
            {
                da.Set(i, 0);
                if(i == 0)
                    da.PushBack(1);
            }
        }
    }

    for(int i=da.Get_Size()-1; i>=0; i--)
    {
        cout<<da.Get(i)<<" ";
    }

}

int main()
{
    int n;
    cin>>n;

    Dynamic_Array da;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        da.PushBack(x);
    }

    Increment_One(da);
}