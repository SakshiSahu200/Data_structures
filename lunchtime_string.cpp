#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,t,n;
    string s;
    cin>>t;
    while(t--){
    cin>>n>>k;
    cin>>s;
   // string str;
   /* for(int i=0;i<k;i++){
        str=str+s[i];
        reverse(str.begin(),str.end());
        cout<<str<<" ";
    }
    cout<<str;
    for(int i=k;i<s.length();i++){
        cout<<s[i];
    }
    cout<<endl;}
    return 0;
}*/

    vector<char>v;
    for(int i=0;i<n;i++){
        v.push_back(s[0]);
            s.erase(0,1);
         reverse(s.begin(),s.end());

    }
    for(auto it=v.rbegin();it!=v.rend();it++)
        cout<<*it;
    }
    return 0;}
