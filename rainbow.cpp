#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int fun(int n){
int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
     int flag=0;
     for(int i=1;i<n/2;i++){
            if(a[i]<a[i-1]){
                flag=1;
            break;}}
            if(flag==1)
            cout<<"no";
            else{
                    int count=0;
                for(int i=0;i<n/2;i++){
                    if(a[i]!=a[n-i-1]){

                        count=1;
                    break;
                }

            }
            count==1?cout<<"no":cout<<"yes";}
            return 0;

}
int main(){
int t,n;
cin>>t;
while(t--){
    cin>>n;
   fun(n);
   cout<<endl;}
   return 0;

}
