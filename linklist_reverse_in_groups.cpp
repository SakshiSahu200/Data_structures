#include<iostream>
using namespace std;
struct node
{
    node *next;
    int data;
    node(int x){
    data=x;
    next=nullptr;
    }
};
node *reverse(node *head,int k)  //recursive
{
    node *curr=head;
    node *prev=nullptr;
    node *next=nullptr;
    int count=0;
    while(curr!=nullptr && count<k)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=nullptr){
        node *rest_head=reverse(next,k);
        head->next=rest_head;
    }
    return prev;
}
void display(node *head){
    while(head!=nullptr){
         cout<<head->data<<" ";
        head=head->next;

    }
}
int main()
{
    //o/p-- 30 20 10 50 40
    int k=3;
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=new node(50);
    head=reverse(head,k);
    display(head);
    return 0;
}
