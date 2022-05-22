#include<iostream>
using namespace std;
/*int f(int n)
{
    if(n==0||n==1)
        return 1;
    return n*f(n-1);   //factorial
}
int main()
{
    int n=5;
    cout<<f(n);
    return 0;
}*/
int fib(int n)              //fibonacci
{
    if(n==0)
        return 0;
    if(n==1||n==2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cin>>n;
   for(int i=0;i<n;i++){
     cout<<fib(i)<<" ";
   }
    return 0;
}
