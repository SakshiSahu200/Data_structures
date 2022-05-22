//stack array implementation and vector implementation
#include<iostream>
using namespace std;
struct MyStack
{
 int top;
 int cap;
 int *arr;
 MyStack(int c)
 {
     cap=c;
     arr=new int(cap);
     top= -1;
 }
/*struct MyStack{               //using vectors
    vector<int>v;
    void push(int x)
    {
        v.push_back(x);
    }
    int pop()
    {
        int res=v.back();
        v.pop_back();
        return res;
    }
    int size()
    {
        return v.size();
    }
    int peek()
    {
        return v.back();
    }
    bool isEmpty()
    {
        return v.empty();
    }
};  */
void push(int x)
{
    if(top==cap-1)
        return;
    top++;
    arr[top]=x;
}
int  pop()
{
    if(top==-1)
        return -1;
    int res;
    res=arr[top];
    top--;
    return res;
}
int peek()
{
    return arr[top];
}
int  size()
{
    return (top+1);
}
bool isEmpty()
{
    return (top==1);
}
};
int main()
{
    MyStack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
     s.push(80);
      s.push(90);
    cout<<s.pop()<<" ";
    cout<<s.peek()<<" ";
    cout<<s.size()<<" ";

    return 0;
}
