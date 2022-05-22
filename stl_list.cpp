/* Almost same as forward_list
front(), back(), size(), begin(), end(), erase(it) , push_front(), pop_front(), push_back(), pop_back() -  O(1)
reverse(), remove() - O(N)
sort() - O(n*log n)
*/
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        l.push_back(a[i]);
    }
     for(auto x:l){
        cout<<x<<" ";
     }
    /*
    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }*/
    return 0;
}


