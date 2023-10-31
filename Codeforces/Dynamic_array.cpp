#include<bits/stdc++.h>

using namespace std;

class dynamic_array
{ 
private:
    int size;
    int capacity;
    int *arr;

public:
    dynamic_array()
    {
        size = 0;
        capacity = 2;
        arr = new int[capacity];
    }

    int Get(int i)
    {
        if(i<0 || i>=size)
        {
            cout<<"index out of range"<<endl;
            return -1;
        }
        return arr[i];
    }

    void Set(int i, int val)
    {
        if(i<0 || i>=size)
        {
            cout<<"Index out of range"<<endl;
            return;
        }
        arr[i] = val;
    }

    void Push_Back(int val)
    {
        if(size == capacity)
        {
            int *new_arr = new int[2*capacity];
            for(int i=0; i < size; i++)
            {
                new_arr[i] = arr[i];
            }
            delete(arr);
            arr = new_arr;
            capacity *= 2;
        }
        arr[size] = val;
        size++;
    }

    void Remove(int i)
    {
        if(i<0 || i>=size)
        {
            cout<<"Index out of range"<<endl;
            return;
        }

        size--;
        for(int j=i; j<size; j++)
        {
            arr[j] = arr[j+1];
        }
    }

    int Size()
    {
        return size;
    }

    int Capacity()
    {
        return capacity;
    }
};

int main()
{
    dynamic_array da;
    da.Push_Back(1);
    da.Push_Back(2);
    da.Push_Back(3);
    da.Push_Back(4);
    da.Push_Back(5);

    //da.Remove(2);

    for(int i=0; i<da.Size(); i++)
    {
        cout<<da.Get(i)<<" ";
    }

    cout<<endl;
    cout<<da.Capacity()<<endl;
    cout<<da.Size()<<endl;
    return 0;
}