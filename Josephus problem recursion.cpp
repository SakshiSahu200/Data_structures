//In Josephus Problem, n elements are there in circular manner, numbered from 0 to n-1, every kth element to be deleted after every iteration, remaining last element will be answer.
#include<iostream>
using namespace std;
jos(int n,int k)           //recursively
{
    if(n==1)
        return 0;
    else
         return (jos(n-1,k)+k)%n;
}
int main()
{
    cout<<jos(5,3);
    return 0;
}
