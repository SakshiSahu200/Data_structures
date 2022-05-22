#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    s.insert(10);
    s.insert(40);
    s.insert(30);
     for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    cout<<endl;
    auto it=s.lower_bound(30);   //will print 30
    //note ...for upper_bound(30) it will print 40
    cout<<"lowerbound of 30: "<<(*it)<<endl;
    cout<<"upperbound of 30: ";
    auto it1=s.upper_bound(30);
    cout<<*it1;
    return 0;
}
