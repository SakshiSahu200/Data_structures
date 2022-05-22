#include<iostream>
using namespace std;
int gcd(int a,int b){
if(a==b)
    return a;
else if(a==0)
    return b;
else if(b==0)
    return a;
else
    return gcd(b,b%a);
}
int main()
{
    int a,b,t;
cin>>t;
while(t--){
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;}
    return 0;
}
