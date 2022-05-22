#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node (int x)
    {
        data=x;
        next=nullptr;
    }
};
Node *removeDuplicates(Node *head)
{
 // this code will require no extra space and also run in O(1) ...in main function do code for printing the numbers

    Node *ptr=head;
    while(ptr!=NULL && ptr->next!=NULL)
    {

        if(ptr->data==ptr->next->data){
            Node *temp=ptr->next;
            ptr->next=ptr->next->next;
            delete(temp);
        }
        else{

        ptr=ptr->next;}
    }
return head;
}

/*
void removeSame(node *head)
{
    if(head==nullptr) return;
    if(head->next==nullptr){
        cout<<head->data;
        return;
    }
    node *first=head;
    node *sec=head;
    first=first->next;
    while(first!=nullptr)
    {

        if(sec->data != first->data){
            cout<<sec->data<<" ";}
        sec=sec->next;
        first=first->next;
    } cout<<sec->data;
return;
} */
int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(20);
    head->next->next->next=new node(30);
    head->next->next->next->next=new node(30);
    head->next->next->next->next->next=new node(40);
    //removeSame(head);
    Remove_duplicates(head);
    return 0;
    }
