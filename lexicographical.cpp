#include<bits/stdc++.h>
using namespace std;
string lexico(string &s,string &str)
{
    for(int i=0;i<s.length()&& i<str.length();i++)
    {
        if(s[i]<str[i])
            return s;
        else if(str[i]<s[i])
            return str;
        else
            continue;
    }
    return s;
}
int main()
{
    string s,str;
    cin>>s>>str;
    cout<<lexico(s,str);
    return 0;
}
