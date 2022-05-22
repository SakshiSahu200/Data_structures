#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++){
          cin>>a[i];
    }
     int count=0;
     for(int i=0;i<m-1;i++){
     if(a[i]>a[i+1])
     count=count + n-a[i]+a[i+1];
     else
     count=count + a[i+1]-a[i];
     }
     cout<<count+a[0]-1
     ;
     return 0;
}
