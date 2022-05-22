#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fun(int a[ ],int n){
    set<int>s;
    vector<int>v;
    for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1]){
                v.push_back(a[i]);}
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        for(int x:v){
                    cout<<x<<" ";
                }
                for(auto it=s.rbegin();it!=s.rend();it++)
                    cout<<*it<<" ";

}
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        if(n==2){
                if(a[0]==a[1]){
        cout<<"-1";}
        else{
            cout<<a[1]<<" "<<a[0];
        }
        }
        else{

        int flag=0;
         for(int i=0;i<n-1;i++){
                if(a[i]==a[i+1]){
                    flag=1;
                    break;
                }
                }
                int c=0;
                 for(int i=0;i<n-2;i++){
                    if(a[i]==a[i+1] && a[i+1]==a[i+2]){
                            c=1;
                    break;}
                 }
                 if(c==1){
                    cout<<"-1";
                 }
                 else{
                if(flag==1){

                     fun(a,n);
                }
                else{
                     for(int i=n-1;i>=0;i--){
                            cout<<a[i]<<" ";
                }}}}
                cout<<endl;
    }
    return 0;
}
