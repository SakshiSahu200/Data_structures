#include<bits/stdc++.h>
using namespace std;

int find_left_max(int arr[],int n,int i){
int maximum=0;
for(int j=0;j<=i;j++){
    maximum= max(maximum,arr[i]);
}
return maximum;
}
int find_right_max(int arr[],int n,int i){
int maximum=0;
for(int j=i;j<n;j++){
    maximum= max(maximum,arr[i]);
}
return maximum;
}
int find_total_water(int arr[],int n){
int total_water  = 0;
for(int i=1;i<n-1;i++){
    int left_max = find_left_max(arr,n,i);
    int right_max = find_right_max(arr,n,i);
    total_water= total_water + min(left_max , right_max)- arr[i];
}
return total_water;
}
int main()
{
    int arr[]={5,0,4};
    int n;
    cin>>n;
        int k= find_total_water(arr,n);
    cout<<k;
    return 0;
}
