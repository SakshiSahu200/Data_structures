#include<iostream>
using namespace std;
int insert(int a[],int n,int x,int cap,int pos)
{
    int i;
    if(n==cap)
        return n;
    int idx=pos-1;

    for(i=n-1;i>=idx;i--){
        a[i+1]=a[i];}
    a[i]=x;
    return(n+1);
}
int main()
{
    int n=5;
    int a[6]={1,2,3,4,5};
    int cap=6;
    int x=6,pos=5;
    insert(a,n,x,cap,pos);
    for(int i=0;i<6;i++)
        cout<<a[i]<<" ";
    return 0;
}


