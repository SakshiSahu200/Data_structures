// Use of at(), insert(), operator[], size(),empty(),clear(), begin(),end()
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>m;
    m.insert({10,200});
    m[5]=100;
     m.insert({3,300});     // o/p- 3 300 5 100 10 200
     // as maps store sorted data acc to keys.
     //suppose if i inset{3,500} as key 3 is already present it will ignore this new value just like sets,it stores unique values.
     //so output will remain unchanged.
    // m.insert({3,800});
        m[3]=800;  //here it will update above value and will assign 800 from 300 to 3rd key
        // m.at(3)=800;   same as above line
     for(auto x: m){   //same as for(auto it=m.begin();it!=m.end();it++)    cout<<(*it).first<<" "; cout<<(*it).second
         // map<int,int>::iterator it   instead of auto we could use this before for loop
        cout<<x.first<<" ";   //will print in sorted form by default
        cout<<x.second<<" ";}  // can also print as cout<<it->first<<" ";
        return 0;
}
