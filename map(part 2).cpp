//Use of find()
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
        map<int,string>m;
        m.insert({4,"gfg"});
        m.insert({2,"map"});
        m.insert({1,"practice"});
       /*
        map<int,string>::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            cout<<(*it).first<<" ";
            cout<<it->second<<endl;
        } */
        for(auto it=m.find(2);it!=m.end();it++){  //will print from key 2 and beyond that
            cout<<it->first<<" ";
            cout<<it->second<<endl;}
        if(m.find(4)==m.end())   //if(m.count(2)==0)  same will be output
            //count and find are almost same, just find returns the address while count returns 0 or 1
            cout<<"not found";
            else
            cout<<"found";
        return 0;
}
