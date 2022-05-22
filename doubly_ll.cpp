#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
    node(int x)
    {
        data=x;
        next=nullptr;
        prev=nullptr;
    }
};
node *Insert_at_begin(node *head,int x)
{
    node *temp=new node(x);
   //temp->prev=nullptr;
  temp->next=head;

    if(head!=nullptr){
        head->prev=temp;
        head=temp;}
    return head;
}
node *insert_at_end(node *head,int x)
{
    node *temp=new node(x);
    if(head==nullptr) return temp;
    node *ptr=head;
    while(ptr->next!=nullptr)
        ptr=ptr->next;
    ptr->next=temp;
    temp->prev=ptr;

}
int main()
{
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    head= Insert_at_begin(head,45);
    insert_at_end(head,50);
    node *ptr=head;
    while(ptr!=nullptr){
            cout<<(ptr->data)<<" ";
            ptr=ptr->next;}
    return 0;
}
