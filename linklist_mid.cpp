//efficient  solution to print mid element else given in ll_more.cpp
#include<iostream>
using namespace std;
struct node{
int data;
node *next;
node (int x)
{
    data=x;
    next=nullptr;
}
};
void print_mid(node *head)
{
if(head==nullptr) return;
        if(head->next==nullptr){
        cout<<(head->data);
        return;}
        if(head->next->next==nullptr){
        cout<<(head->next->data);
        return;}
        node *first=head;
        node *sec=head;
        while(first->next!=nullptr &&first->next->next!=nullptr){
            first=first->next->next;
            sec=sec->next;
        }
        cout<<(sec->data);
}
int main()
{
    node *head=new node(20);
    head->next=new node(30);
    head->next->next=new node(40);
    print_mid(head);
  return 0;
    }

