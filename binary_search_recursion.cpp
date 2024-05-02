#include<bits/stdc++.h>
using namespace std;
void print(int *arr,int size,int l,int r)
{
    for(int i = l; i<=r; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int binarySearch(int *arr,int size,int l,int r,int k)
{
    cout<<endl;
    print(arr,size,l,r);
    // base case
    if(l>r)
    {
        return -1;
    }

    int mid = (l+r)/2;
    cout<<"Value of mid is "<<arr[mid]<<endl;
    if(arr[mid] == k)
    {
        return mid;
    }

    if(arr[mid] < k)
    {
        l = mid+1;
        return binarySearch(arr,size,l,r,k);
    }
    else{
        r = mid - 1;
        return binarySearch(arr,size,l,r,k);
    }
}

int main()
{
    int arr[] = {1,2,4,6,10,14,18,34,45,67,87,565};
    int size = sizeof(arr) / sizeof(arr[0]);
    int l = 0;
    int r = size-1;
    int key = 565;
    int ans =  binarySearch(arr,size,l,r,key);
    if(ans != -1)
    {
        cout<<arr[ans]<<" found at position "<<ans+1<<endl;
    }
    else{
        cout<<arr[ans]<<" not found"<<endl;
    }
}