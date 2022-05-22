//recursively reverse a link list
#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=nullptr;
    }
};
node *recursive_reverse(node *head)
{
    if(head==nullptr || head->next==nullptr)
        return head;
    node *rest_tail=head->next;
    node *rest_head=recursive_reverse(head->next);
    rest_tail->next=head;
    head->next=nullptr;
    return rest_head;
}
int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next= new node(30);
    head->next->next->next= new node(40);
    //head=reverse(head);
    head= recursive_reverse(head);
    node *ptr=head;
    while(ptr!=nullptr){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    return 0;
}
