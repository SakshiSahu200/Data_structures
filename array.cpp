//to insert and search an element
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int swap(int a,int b){
int temp=0;
temp=a;
a=b;
b=temp;
return 0;
}
int main()
{
    int n,x,flag=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];      // 3 45 2 21 8
    }
    /* *************** search an element ****************/
/*    cin>>x;
    for(int i=0;i<n;i++){
        if(a[i]==x)
           flag=1;

    }
    flag==1?cout<<"1":cout<<"0";
    */
   // for(int i=n-1;i>=0;i--){
     //   cout<<a[i]<<" ";
    //}
    int start=0,end=n;
    while(start<end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i];      // 3 45 2 21 8
    }
    return 0;
}
