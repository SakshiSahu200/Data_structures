#include<bits/stdc++.h>
#include<string>
using namespace std;
    bool checkIfPangram(string s) {
        if(s.length()<26)
            return false;
        unordered_map<char,int>h;

        for(int i=0;i<s.length();i++)
            h[s[i]]++;

            for(char i='a';i<='z';i++){
               if(h.find(i)==h.end())
                    return false;

        }
        return true;
    }
int main(){
    string s;
    cin>>s;
    cout<<checkIfPangram(s);
    return 0;
}
