#include<iostream>
#include<time.h>
using namespace std;
int gcd(int a,int b)
{
    while(b!=0)
       {int t;
         t=b;
    b=a%b;
    a=t;
    return a;
       }
}
int main()
{clock_t start,end;
double cpu_time_used;

start=clock();
    int x,y;
    cin>>x>>y;
    gcd(x,y);
    cout<<gcd(x,y);
    end=clock();
   cpu_time_used=(double)(end-start);
   cout<<"time taken= "<<cpu_time_used;
    return 0;
}

