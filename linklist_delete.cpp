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
node *delete_at_begin(node *head)
{
    if(head==nullptr)  return nullptr;
    if(head->next==nullptr)
    {
        delete head;
        return nullptr;
    }
    node *temp=head->next;
    delete head;
    return temp;

}
node *delete_at_end(node *head)
{
    if(head==nullptr)  return nullptr;
    if(head->next==nullptr)
    {
        delete head;
        return nullptr;
    }
    node *ptr=head;
    while(ptr->next->next!=nullptr)
    {
        ptr=ptr->next;
    }
    delete ptr->next;
    ptr->next=nullptr;
    return head;
}
/*deleteEnd(node *head)
{
    if(head==nullptr)
        return nullptr;
    if(head->next==nullptr)
        delete head;
        return nullptr;

    node *ptr=head;
    while(ptr->next->next!=nullptr){
        ptr=ptr->next;}
      delete(ptr->next);
    ptr->next=nullptr;
   return head;
}  */
int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head=delete_at_begin(head);
    head=delete_at_end(head);
    node *ptr=head;
    while(ptr){
    cout<<(ptr->data)<<endl;
    ptr=ptr->next;}
    return 0;
}
