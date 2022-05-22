#include<iostream>
using namespace std;
struct node{
int data;
 node*next;
 node(int x)
{
    data =x;
    next=nullptr;
}
};
  node* removeNthFromEnd(node* head, int n) {
        int count=0;
        node *ptr=head;
        if(head->next==NULL && n==1){
            delete head;
            return NULL;
        }
       if(head->next->next==NULL)
       {
           if(n==2){
               node *tem=head->next;
               delete head;
               return tem;}
           else
           {
               delete head->next;
               return head;
           }
       }
        while(ptr->next!=NULL){
            ptr=ptr->next;
            count++;
        } count++;
        //int k=count-n+1;
        if(n<=count){
        ptr=head;
        while(ptr->next!=NULL && count!=n+1)
        {
            ptr=ptr->next;
            count--;
        }
        node *temp=ptr->next->next;
      delete ptr->next;
        ptr->next=temp;

        }
         return head;
    }

int main()
{
    node *head=new node(10);
    head->next=new node(20);
    //head->next->next=new node(30);
    // head->next->next->next=new node(40);
    int n;
    cin>>n;
    head=removeNthFromEnd(head,n);
    node *ptr=head;
    while(ptr){
    cout<<(ptr->data)<<endl;
    ptr=ptr->next;}
    return 0;
}
