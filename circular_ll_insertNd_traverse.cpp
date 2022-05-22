//traversal
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
void traverse(node *head)
{
    node *ptr=head;
    cout<<ptr->data<<" ";
    while(ptr->next!=head){
        ptr=ptr->next;
        cout<<ptr->data<<" ";
    }
}
node *insert_at_end(node *head,int x){
    node *temp=new node(x);
    if(head==nullptr){
        temp->next=temp;
        return temp;}
    node *ptr=head;
      while(ptr->next!=head){
        ptr=ptr->next;}

        ptr->next=temp;
        temp->next=head;
        return head;
}
node *insert_at_begin(node *head,int x)
{
    node *temp=new node(x);
    if(head==nullptr) return temp;
    node *ptr=head;
    while(ptr->next!=head)
        ptr=ptr->next;
    ptr->next=temp;
    temp->next=head;
    return temp;
    //could also be used efficiently...just copy the second element data to first then delete second node in both insertion and deletion
}
int main()
{
    node *head=new node(10);
    head->next= new node(20);
    head->next->next= new node(50);
    head->next->next->next= new node(60);
    head->next->next->next->next= head;
    head=insert_at_end(head,85);
    head=insert_at_begin(head,45);
    traverse(head);
    return 0;
}
