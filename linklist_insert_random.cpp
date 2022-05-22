//insert node at given position
// 2) also insert element such that it remains sorted
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
node *InsertNode(node *head,int pos,int data)
{
    node *ptr=new node(data);
    if(pos==1){
        ptr->next=head;
        return ptr;
        }
    node *curr=head;
    for(int i=1;i<=pos-2 && curr!=nullptr;i++)
        curr=curr->next;
    if(curr==nullptr)
        return head;
    ptr->next=curr->next;
    curr->next=ptr;
    return head;
}
node *InsertSort(node *head,int x)
{
     node *temp=new node(x);
     if(head==nullptr)
        return temp;
     if(x<head->data){
        temp->next=head;
        return temp;}
    node *ptr= head;
    while(ptr->next!=nullptr&& ptr->next->data<x)
        ptr=ptr->next;
   temp->next=ptr->next;
    ptr->next= temp;
    return head;
}
int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);

    head= InsertSort(head,25);   //but a thing is that we can apply this to a sorted linklist only ...
     head= InsertNode(head,2,45);
     node *ptr=head;
    while(ptr){
    cout<<(ptr->data)<<endl;
    ptr=ptr->next;}
    return 0;
}
