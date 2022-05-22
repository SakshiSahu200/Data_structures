#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    //a[0]=2; segmentation fault
    a.push_back(2);
    a.push_back(5);
    //cout<<a[1]<<" ";
    //a[1]=4;
    //cout<<a[1];
    vector<int>b(a);  //copy constructor
    //b={2,4}==a
    cout<<b[1]<<endl;
    //vector<char>c(a); //here it will give error coz of dif tyoes
    vector<char>c(5,66); //c={'B','B','B','B','B'}
    //cout<<c[3];
    vector<int>d(a.begin(),a.end()); //d={2,4};
    //cout<<d[0];
    d.push_back(5); //d={2,4,5};
    //cout<<a[2]; //garbage value
    //cout<<a.at(2); //print out of range
    //cout<<(a==d); //return 0;
    //cout<<(a<d); //lexicgraphically correct
    vector<int>v(10);
    for(int i=0;i<10;i++)k
        v[i]=i+1;
    //cout<<v.at(6)<<endl; //7
    //cout<<v.back();  //10
//    cout<<v.end(); cant print an iterator...error
    vector<int>v1(v);
    v.clear();
    cout<<v[0]<<endl;; //it shouldn,t get printed but give 1 coz of square brackets...it doesnt delete the memory
   //cout<<v.at(0); //it wouldnt allow since we have cleared all elements...sounds ambiguous but yeah it is
   cout<<"v.size()= "<<v.size()<<endl;
   cout<<"v.capacity()= "<<v.capacity()<<endl;

    return 0;
}
