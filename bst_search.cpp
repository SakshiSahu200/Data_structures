#include<iostream>
using namespace std;

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
//time complexity for both recursive and iterative will be O(h)
//but auxiliary space...in recursive O(h) since h function calls and O(1) in iterative.
bool search(node *root,int x)  //recursively
{
    if(root==nullptr)
        return false;
    else if(root->data==x)
        return true;
    else if(root->data>x)
        return search(root->left,x);
    else
        return search(root->right,x);

    }
    bool search_iteratively(node *root,int x)
    {
        while(root!=nullptr){
            if(root->data==x)
            return true;
            else if(root->data<x)
                root=root->right;
            else
                root=root->left;

        }
        return false;
    }
int main()
{
    node *root=new node(15);
    root->left=new node(10);
    root->right=new node(20);
    //cout<<search(root,25);
    cout<<search_iteratively(root,20);
    return 0;

}
