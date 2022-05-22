#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   /* int t,n,k;
    cin>>t;
    while(t--){
            cin>>n>>k;
            string a;
    vector<string>v1;
    v1.clear();
    for(int i=0;i<n;i++){
        cin>>a;
        v1.push_back(a);
    }
    string s;
    vector<string>v;
    v.clear();
    int in;
    for(int i=0;i<k;i++){
        cin>>in;
            for(int j=0;j<in;j++){
                cin>>s;
                v.push_back(s);
            }
    }

    for(int i=0;i<v1.size();i++){
            int flag=0;
        for(int j=0;j<v.size();j++){
            if(v1[i]==v[j]){
                flag=1;
                cout<<"Yes"<<endl;
            break;}

        }
        if(flag==0){
            cout<<"No"<<endl;
        }
    }
    } */
    vector<int>v{1,2,3,4};
   vector<int>::iterator it=v.begin();
   cout<<*it<<" ";    //1
   it++;
   cout<<*it;    //2
   it=v.end();
   it--;
   cout<<*it;    //4
   cout<<endl;
   it=v.begin();
   it=next(it);  //if we don't pass two argument it will move towards just next element
   cout<<*it<<" ";
   it=next(it,2);
   cout<<*it<<" ";
   it=prev(it);
   cout<<*it<<" ";
    return 0;
    }

