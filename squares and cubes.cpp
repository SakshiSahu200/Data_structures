#include<bits/stdc++.h>
using namespace std;
int main()
{
        long long int n,t;
        cin>>t;
        while(t--){
            cin>>n;
            long long int a=floor(sqrt(n));
            long long int b=floor(cbrt(n));
            cout<<a+b-floor(sqrt(cbrt(n)));
            cout<<endl;
        }
        return 0;
}
