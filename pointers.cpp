#include<iostream>
using namespace std;
void fun(int arr[])
{
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={10,20,30,40};
    cout<<" size"<<sizeof(arr[0]);
    int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<"\n";

        fun(arr);
    return 0;
}
