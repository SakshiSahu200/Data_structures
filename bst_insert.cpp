#include<iostream>
using namespace std;
//timme complexity- O(h) in both but space complexity is O(h) in recursive and O(1) iterative
struct node
{
    node *left,*right;
    int data;
    node(int x){
    data=x;
    left=nullptr;
    right=nullptr;
    }
};
node* insert(node *root,int key)
{
    if(root==nullptr) return new node(key);
    if(root->data<key)
        root->right= insert(root->right,key);  //we are assigning the value so that the new node can be linked with the existing node
    else
        root->left=insert(root->left,key);
    return root;
}
node* insert_iteratively(node *root,int x)
{
    node *temp= new node(x);
    node *parent=nullptr,*curr=root;  //we are maintaining a parent pointer to link a node with the new node.
    while(curr!=nullptr){
    parent=curr;
    if(curr->data>x)
        curr=curr->left;
    else if(curr->data<x)
        curr=curr->right;
    else
        return root;  //if the value is same we wouldn't insert anything
    }
    if(parent==nullptr) return temp;
    if(parent->data<x)
    parent->right=temp;
    else
        parent->left=temp;
    return root;
}
void display(node *root)
{
    //after inserting we output inorder traversal here
    if(root==nullptr) return;
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}
int main()
{
    node *root=new node(15);
    root->left=new node(10);
    root->right=new node(20);
   // root=insert_iteratively(root,34);
   root=insert(root,34);
    display(root);
    return 0;}
