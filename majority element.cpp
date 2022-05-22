#include<bits/stdc++.h>
using namespace std;
int majorityElement(int a[], int size)
{

    // your code here
    if(size==1) return a[0];
         unordered_map<int,int>h;
   for(int i=0;i<size;i++)
   {
       h[a[i]]++;
   }
   int maxi=0;
   for(auto x:h){
       maxi=max(maxi,x.second);
   }
    if(maxi==1 || maxi<=size/2)
   return -1;
  for(auto x:h){
      if(x.second==maxi )
      return x.first;
  }
    }
}
int main()
{
    int size;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<majorityElement(a,size);
    return 0;
}
