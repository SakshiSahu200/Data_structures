//to search an element and return index of it
#include<iostream>
using namespace std;
int search(int a[],int n,int k)
{
    for(int i=0;i<n;i++){
       if(a[i]==k)
        return i;}
    return  -1;
}
int main()
{
    int n,k,j;
    cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   cin>>k;   //searching key k
   j=search(a,n,k);
   cout<<j;   //returning index of key
   return 0;
}
