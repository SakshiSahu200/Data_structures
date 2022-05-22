#include<bits/stdc++.h>
#include<string>
using namespace std;
string to_lowercase(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i]+=32;
    }
    return s;
}
int Is_vowel(char c)
{
    if(c=='a'||c=='e'||c=='o'||c=='i'||c=='u'||c=='y')
        return 1;
    return 0;
}
int main()
{

    string s;
    cin>>s;
    s=to_lowercase(s);
    vector<char>v;
    for(int i=0;i<s.length();i++){
        int flag=0;
        flag=Is_vowel(s[i]);
        if(flag==0)
        v.push_back(s[i]);
    }
    for(auto x:v){
        cout<<".";
        cout<<x;
    }
    return 0;
}
