#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        vector<int>v;
        int k=0;
        for(int i=0;i<n;i++){
            cin>>a[i];

            if(a[i]==0){
                k++;
                continue;}
            else{
                v.push_back(a[i]);}
        }
        for(auto it=v.begin();it!=v.end();it++)
        {
            cout<<*it<<" ";
        }
        for(int i=0;i<k;i++)
            cout<<"0"<<" ";
        cout<<endl;
    }
    return 0;
}
