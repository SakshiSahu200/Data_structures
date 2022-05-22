//find winner of election
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a[n];
   unordered_map<string,int>h;
   for(int i=0;i<n;i++){  //TC= O(n*max)
        cin>>a[i];
    h[a[i]]++;
   }
   int max=0;
   string winner;
   for(auto x:h){
    if(x.second>max){
        max=x.second;
        winner=x.first;}
        else if(x.second==max && x.first<winner)  //for lexicographical order
                winner=x.first;
   }
   cout<<winner;
   return 0;}



