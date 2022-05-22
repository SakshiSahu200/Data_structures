#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countFreq(int a[],int n)
{
    unordered_map<int,int>h;
    for(int i=0;i<n;i++)
        h[a[i]]++;
    for(auto x:h)
        cout<<x.first<<" "<<x.second<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    countFreq(a,n);
    return 0;
}
