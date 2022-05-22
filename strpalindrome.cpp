#include<iostream>
#include<string>
using namespace std;
string pal(string s){
    string ans=" ";
    int l=s.length();
    int i=0;
    while(i<l-i-1){
if(s[i]!=s[l-i-1]) return "no";
i++;}
return "yes";}
int main()
{
    string str;

    while(str!="a"){
              cin>>str;
        cout<<pal(str)<<endl;
    }
    return 0;
}
