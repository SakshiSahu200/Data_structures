//count the elements which are common in both arrays
//take a[]=10 15 20 5 30    b[]=30 5 30 80
//o/p- 2
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    set<int>s;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
     for(int i=0;i<m;i++){
        cin>>b[i];
    } int count=0;
    for(int i=0;i<m;i++){
            if(s.find(b[i])!=s.end()){
                count++;
                s.erase(b[i]);
            }}
        cout<<count;
    return 0;
}
