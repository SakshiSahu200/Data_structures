//insert node at begin and end
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
node *deleteEnd(node *head)
{
    if(head==nullptr)
        return nullptr;
    if(head->next==nullptr)
        delete head;
        return nullptr;

    node *ptr=head;
    while(ptr->next->next!=nullptr)
        ptr=ptr->next;
      delete(ptr->next);
    ptr->next=nullptr;
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
