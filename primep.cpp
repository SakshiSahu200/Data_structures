#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {cout<<"not a prime";
        goto end;}
            cout<<"no. is prime";
       end:
        return 0;
    }

}
