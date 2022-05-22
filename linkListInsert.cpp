#include<iostream>
using namespace std;
struct node{
int data;
node *next;
node(int x)
{
    data =x;
    next=nullptr;
}
};
node *insertBegin(node *head,int x)
{
    node *temp=new node(x);
    temp->next=head;
    return temp;    //or head=temp; then no return required
}
node *insertEnd(node *head,int x)
{
    node *temp=new node(x);
    if(head==nullptr)
        return temp;
        node *ptr=head;
    while(ptr->next!=nullptr)
        ptr=ptr->next;
    ptr->next=temp;
    return head;

}
void show(node *head)
{
    node *ptr=head;
    while(ptr){
    cout<<(ptr->data)<<endl;
    ptr=ptr->next;}

}
int main()
{
    node *head=nullptr;
    head=insertBegin(head,2);
    head=insertBegin(head,3);
    head=insertBegin(head,4);
        head=insertBegin(head,5);
    head =insertEnd(head,8);
     head =insertEnd(head,9);
       show(head);
    return 0;
}
