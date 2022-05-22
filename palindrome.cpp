#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n,T;
     cin>>T;
    for(int i=1;i<=T;i++)
   {
        cin>>n;
    a=n%10;
    b=n/10;
    c=b/10;
    if(a==c)
        cout<<"wins";
    else
        cout<<"loses";
   }
    return 0;

}

