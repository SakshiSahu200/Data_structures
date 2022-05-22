//traversal in link list and recursively print
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)    //using constructor
    {
        data =x;
     next=nullptr;
    }
};
void rPrint(node *head)    //recursively....butb iterative is better as it doe snot require auxiliary space....T.C.= O(n);
{
    if(head==nullptr)
        return;
    cout<<(head->data)<<" ";
    return rPrint(head->next);
}
int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    rPrint(head);   //recursive call
    /*node *ptr=head;
    while(ptr){
    cout<<(ptr->data)<<endl;
    ptr=ptr->next;} */
    return 0;
}

