#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[],int size,int k,int index = 0)
{
    if(index == size)
    {
        return -1;
    }
    if(arr[index] == k)
    {
        return index;
    }
    else{
         
        return linear_search(arr,size,k,index+1);
    }
}

int main()
{
    int arr[] = {3,5,6,7,8,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    int ans = linear_search(arr,size,k);
    if(ans != -1)
    {
        cout<<"Item "<<arr[ans]<<" is found at position "<<ans+1<<endl;
    }
    else{
        cout<<"Item is not found"<<endl;
    }
}