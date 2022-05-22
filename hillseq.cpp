#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fun(vector<int>&v)
{
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]==v[i+1])
            return 1;
    }
    return 0;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;

        int a[n];
        set<int>s;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        if(n==2){
            if(a[0]==a[1]){
                cout<<"-1";
        }}
        else{
        sort(a,a+n);
        vector<int>v;
        int flag=0;
         for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1]){
                v.push_back(a[i]);
                flag=1;}
            else
                continue;}
                if(flag==0){
                    for(int i=n-1;i>=0;i--)
                        cout<<a[i]<<" ";
                }

                else{
                sort(v.begin(),v.end());
                if(fun(v)==1){
                    cout<<"-1";
                }
                        else
                        {
                for(int x:v){
                    cout<<x<<" ";
                }
                for(auto it=s.rbegin();it!=s.rend();it++)
                    cout<<*it<<" ";} } }
                    cout<<endl;
    }
    return 0;
}
