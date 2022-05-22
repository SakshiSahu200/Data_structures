#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]>x)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}
int main()
{
    int arr[]={20,30,40,50,60};
    int n=5,x=70;
    int k=binary_search(arr,n,x);
    cout<<k;
    return 0;
}
