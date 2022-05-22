//print mid element of link list and in case of even elements print second middle
//2) print nth element from last
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
int PrintMidElement(node *head)
{
    node *ptr=head;   //if(head==null) return;
    int count=0;
    while(ptr)
    {
        ptr=ptr->next;
        count++;             //THIS IS A NAIVE SOLUTION, it can be solved in a better approach without traversing twice, we can have TWO POINTERS
    }
    ptr=head;
        for(int i=0;i<(count/2);i++){
            ptr=ptr->next;}
        return (ptr->data);
}
/*void print(node *head)  ------------will have to check out..something is mistaken
{
    if(head==nullptr) return;
    node *slow=head;
    node *fast=head;
    while(fast->next!=nullptr && fast!=nullptr)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<(slow->data);
} */
void PrintFromLast(node *head,int n)     //print Nth element from last
{
    if(head==nullptr)
        return;
  node *first=head;
  for(int i=0;i<n;i++){
    first=first->next;
  }
  node *sec=head;
  while(first!=nullptr){
        if(first==nullptr) return;
        first=first->next;
        sec=sec->next;}
  cout<<(sec->data);
}
int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    cout<<PrintMidElement(head);
    cout<<endl;
    PrintFromLast(head,3);
    return 0;
}

