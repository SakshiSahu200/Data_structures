#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,n,p,k;
    int num=0,iteration=0,total=0,res=0;
    cin>>t;
    while(t--){
        cin>>n>>p>>k;
        iteration=ceil(p/k);
        num=(p%k)+1;
        total=((n-1)/k)+1;
        res=total*(num-1)+iteration;
        cout<<res+1<<endl;
    }
    return 0;
}
