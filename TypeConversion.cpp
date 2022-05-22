// char can get converted into int or other.....precedence sequence will be,...(c,i,f,d)..i.e,char,int ,float,double
#include<iostream>
using namespace std;
int main()
{
    int x=10;
    float y=2.3;
    cout<<x+y<<endl;         //int converted to float so o/p is 12.3

    int a=15,b=2;
    double z=static_cast<double>(a)/b;
    // or we could simply write as double z=double(a)/b;
    cout<<z;
    return 0;
}
