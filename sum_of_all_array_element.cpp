#include<bits/stdc++.h>
using namespace std;

int sum_of_element(int *arr,int size)
{
    if(size == 0)
    {
        return 0;
    }
    if(size == 1)
    {
        return arr[0];
    }
    int rem = sum_of_element(arr+1,size-1);
    int sum = arr[0] + rem;
    return sum;

}

int main()
{
    int arr[] = {10,15,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = sum_of_element(arr,size);
    cout<<ans;

}