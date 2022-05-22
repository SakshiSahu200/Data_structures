#include<iostream>
#include<bits/stdc++.h>
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
bool isLoop(node *head)
{
    //node *curr=head;
    node *slow=head;
    node *fast=head;
    while(fast!=nullptr && fast->next!=nullptr)
    {
        slow=slow->next->next;
        fast=fast->next;
        if(fast==slow)   //if there is loop present, slow and fast will definitely meet at some point and there we will return
            return true;
    }
    return false;
} /* Now the question arises
    1)how do u know that they will meet at some point,....so ans is
     when slow and fast will enter the loop, they must be at some k distance, in the next iteration ,the distance will get incremented by 1
     i.e, k+1, in next k+2...and so on, there will come a point where the distance will become n, as they are in a loop , they must be at same position
     2) Why fast is twice than slow, not thrice or four times,...so that it would cover each element, another case there might be a possibility that they will not meet */
int main()
{
    node *head=new node(10);
     head->next=new node(20);
    head->next->next=new node(30);O
    head->next->next->next=new node(40);
     head->next->next->next->next=head->next;
     cout<<isLoop(head);
     return 0;
}
