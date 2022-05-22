#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    vector<int>v;
    for(int i=0;i<5;i++){
        cin>>a[i];
        v.push_back(a[i]);
    }

    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}
