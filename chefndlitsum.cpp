#include<iostream>
using namespace std;
int main()
{
    int t,n,c=1;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],b[n],min=0,sum=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
         for(int i=1;i<=n;i++)
        { b[i]=sum+a[i];
    }
    min=b[1];
     for(int i=1;i<=n;i++)
        {
        if(b[i]<min){
            min=b[i];
            c=i;
        }}
        cout<<c<<endl;}
        return 0;
}
