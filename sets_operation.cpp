#include<bits/stdc++.h>
using namespace std;
set<int> setInsert(int arr[],int n);
void setDisplay(set<int>s);
void setErase(set<int>&s,int x);

set<int> setInsert(int arr[],int n)
{
    set<int>s;

    //Your code here to insert arr into s
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    return s;

}


void setDisplay(set<int>s)
{
    //Your code here to display elements of s

     for(auto it=s.begin();it!=s.end();it++){
         cout<<*it<<" ";
     }
     cout<<endl;
}

void setErase(set<int>&s,int x)
{
   //write if condition here
 if(s.find(x)!=s.end()){
     cout<<"erased "<<x<<endl;
     s.erase(x);
 }
 else
 cout<<"not found"<<endl;}

 int main()
 {
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        set<int>s= setInsert(arr,n);
        setDisplay(s);
        int x;
        cin>>x;
        setErase(s,x);
        setDisplay(s);
     }
     return 0;
 }
