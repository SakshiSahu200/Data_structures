#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x=0){
    data=x;
    next=nullptr;
    }
};
//Create a dumy node...T.C=O(N) Space- O(1)
/* So basically we made a temporary node and while traversing making each node pointing towards that temp node ...
so if loop will be found, node's next must be already pointing towards temp, so we will return true else exit.  */
bool isLoop(node *head)
{
    node *curr=head;
    node  *temp=new node;    //we have not passed any parameter and its not showing error as we made a default constructor
    while(curr!=nullptr)
    {
        if(curr->next==nullptr)
            return false;
        if(curr->next==temp)
            return true;
        node *ptr=curr->next;
        curr->next=temp;
        curr=ptr;
    }
    return false;
}

int main()
{
    node *head=new node(10);
     head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
     head->next->next->next->next=head->next;
     cout<<isLoop(head);
     return 0;
}
