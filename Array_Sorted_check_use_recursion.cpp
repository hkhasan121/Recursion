#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr , int size)
{
    if(size == 0 || size == 1)
    {
        return true;
    }
    if(arr[0] > arr[1])
    {
        return false;
    }
    else{
        return isSorted(arr + 1 , size - 1);
    }
}

int main()
{
    int arr[]={3,4,9,12,14,15};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool ans = isSorted(arr,size);
    if(ans == true)
    {
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
}