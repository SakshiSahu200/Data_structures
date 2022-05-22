#include<iostream>
#include<time.h>
using namespace std;
int main()
{clock_t start,end;
double cpu_time_used;

start=clock();
   int a,b,k,c;
   cout<<"enter two numbers";
   cin>>a>>b;
   if(a<b){
    k==a;
   }
   else
    k==b;
   for(c=k;c>=1;c--)
   {
       if(a%c==0&&b%c==0)
        break;
   }
   cout<<"HCF of two numbers is "<<c;
   end=clock();
   cpu_time_used=(double)(end-start);
   cout<<"time taken= "<<cpu_time_used;
   return 0;
}
