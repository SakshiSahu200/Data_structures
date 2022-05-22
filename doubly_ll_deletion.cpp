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
node *delete_head(node *head)
{

    if(head==nullptr) return nullptr;
    if(head->next==nullptr){
        delete head;
        return nullptr;
    }
    else{
        node *temp=head;
        head=head->next;
        head->prev=nullptr;
        delete temp;
        return head;
    }
}
node *delete_tail(node *head)
{
    if(head==nullptr) return nullptr;
    if(head->next==nullptr){
        delete head;
        return nullptr;
    }
    node *ptr=head;
    while(ptr->next->next!=nullptr)   //either we can reach the ptr till last element then simply do   ptr->prev->next=null , delete temp;
        ptr=ptr->next;
    node *temp=ptr->next;
    ptr->next=nullptr;
    delete temp;
    return head;

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
    head= delete_tail(head);
    node *ptr=head;
    while(ptr!=nullptr){
            cout<<(ptr->data)<<" ";
            ptr=ptr->next;}
    return 0;
}

