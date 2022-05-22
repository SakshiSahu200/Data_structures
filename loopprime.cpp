#include<iostream>
using namespace std;
int main()
{
 int i,n,j,T;
 cin>>T;
 for(j=1;j<=T;j++)
 {cin>>n;
 for(int i=2;i<n;i++)
 {
     if(n%i==0)
     {cout<<"not a prime";
     break;}
     else
      continue;}
       for(int i=2;i<n;i++)
       {
           if(n%i==0)
            break;
          else if(i==n-1&&n%i!=0)
           {cout<<"prime";}
           else
        continue;}}
    return 0;
}




