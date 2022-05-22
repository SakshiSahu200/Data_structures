#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
     node(int x)
    {
        data=x;
        next=nullptr;
    }
};
struct MyStack
{
    node *head;
    int size;
    MyStack()
    {
        head=nullptr;
        size=0;}
        void push(int x)
        {
            node *temp=new node(x);
            temp->next=head;
            head=temp;
            size++;
        }
        int pop()
        {
            if(head==NULL)
                return INT_MAX;
            int res=head->data;
            node *temp=head;
            head=head->next;
            delete(temp);
            size--;
            return res;
        }
        int peek()
        {
            if(head==nullptr)
                return INT_MAX;
            return head->data;
        }

};
/*int push(int x)
{
    node *head=new node(x);
    head=head->next;
}*/
int main()
{
    MyStack s();
    s.push(20);
    s.push(34);
    cout<<s.pop();
    return 0;
}

