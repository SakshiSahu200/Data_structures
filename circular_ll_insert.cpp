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
node *delete_head(node *head)
{
    node *temp= head->next;
    if(head==nullptr)
        return nullptr;
    if(head->next==head){
        delete head;
        return nullptr;}
    node *ptr=head;
    while(ptr->next!=head)
        ptr=ptr->next;
    ptr->next= head->next;
    delete head;
    return (ptr->next);

}
node *delete_end(node *head)
{

}
int main()
{
    node *head=new node(10);
    head->next= new node(20);
    head->next->next= new node(50);
    head->next->next->next= new node(60);
    head->next->next->next->next= head;
    head=delete_head(head);
    node *ptr=head;
    cout<<ptr->data<<" ";
    while(ptr->next!=head){
        ptr=ptr->next;
        cout<<ptr->data<<" ";
    }
    return 0;
}
