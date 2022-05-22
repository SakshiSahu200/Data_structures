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
// in below reverse function, we simply change the directions of links in order to get a link list in reverse form, first we will store the location of current's next var
// else we will lose the remaining track, then will make curr->next = prev...in this way links direction will get reverse then we'll return the last element as head.
node *reverse(node *head)
{
    node *curr=head;
    node *prev= nullptr;
    while(curr!=nullptr)                //iteratively - T.C= O(n), S.C- O(1)
    {
        node *next=curr->next;         //so that we wouldn't lose reference towards next, so we store curr->next reference
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
node *recursive_reverse(node *head)
{
    if(head==nullptr|| head->next==nullptr)
        return head;
    node *rest_head=recursive_reverse(head->next); //recursively- T.C= O(n), S.C- O(n) because we create a recursive stack each time we call the reverse func recursively
    node *rest_tail= head->next;                         //TC if O(n) since we go to the tail and work backwards
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
