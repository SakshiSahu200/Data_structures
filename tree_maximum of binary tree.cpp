#include<iostream>
using namespace std;
struct node{
    node *left,*right;
    int data;
    node(int x)
    {
        data=x;
        left=nullptr;
        right=nullptr;
    }
};
int get_max(node *root)
{
    if(root==nullptr)
        return INT_MIN;
    return max(root->data,max(get_max(root->left),get_max(root->right)));

}
int main()
{
    node *root=new node(10);
    root->left=new node(30);
    root->right=new node(12);
    root->left->left=new node(34);
    root->left->right=new node(42);
    cout<<get_max(root);
    return 0;
}
