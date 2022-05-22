#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    char i;
    cin>>i;
    switch(i)
    {
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
    default:
        cout<<"invalid";
    }
    return 0;
}
