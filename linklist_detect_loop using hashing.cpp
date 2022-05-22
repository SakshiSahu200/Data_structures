//we store address of the nodes in hash table and return true if the address comes again while traversing
//but it takes O(n) auxiliary space along with O(n) time complexity
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
    unordered_set<node *>s;
    for(node *curr=head;curr!=nullptr;curr=curr->next)
    {
        if(s.find(curr)!=s.end())
        return true;
            s.insert(curr);
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
