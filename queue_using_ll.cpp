#include<iostream>            //a glitch
using namespace std;
struct  node
{
    int data;
    node *next;
    node (int x)
    {
        data=x;
        next=nullptr;
    }
};
struct queue
{
    node *front,*rear;
    queue() {front=nullptr; rear=nullptr;}
    void enque(int x)
    {
        node *temp=new node(x);
        if(front==nullptr){
            front=rear=temp;
            return;
        }
        rear->next=temp;
        rear=temp;
    }
    int deque()
    {
        if(front==nullptr) return -1;
        node *temp=front;
        int res=temp->data;
        front=front->next;
        if(front=nullptr) {rear=nullptr;}
        delete(temp);
        return res;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        queue *sq=new queue();
        int q;
        cin>>q;
        while(q--){
            int QueryType=0;
            cin>>QueryType;
            if(QueryType==1){
                int a;
                cin>>a;
                sq->enque(a);
            }
            else if(QueryType==2){
                cout<<sq->deque()<<" ";
            }
        } cout<<endl;
    }
    return 0;
}
