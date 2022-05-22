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
//recursively
int search(node *head,int key)
{
    if(head==nullptr)
        return -1;
    if(head->data==key)
        return 1;
    else{
        int res=search(head->next, key);
        if(head==nullptr)
            return -1;
        else
            return (res+1);}

}  /*
int search(node *head,int key)
{
    int pos=1;
    node *ptr=head;
    while(ptr!=nullptr)
    {
        if(ptr->data==key)
            return pos;
        else
            pos++;
            ptr=ptr->next;

    }
    return -1;
}*/
int main()
{
        node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    cout<<search(head,20);
    return 0;
}
