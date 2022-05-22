#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        vector<int>v;
        v.clear();
        for(int i=1;i<=n;i++){
            cin>>a[i];
            v.push_back(a[i]);
        }
        sort(v.begin(),v.end());
        if(v.front()==v.back()){
            cout<<n<<endl;
        }
        else //all taken no. should be d/b that denomination
        {
            v.back()=v[0];
            vector<int>v1(v);
            for(int i=0;i<n;i++){
                v1[i]=v1[i]/v1[0];
            }
            int sum=0;
             for(int i=0;i<n;i++){
                sum+=v1[i];
             }
             cout<<sum<<endl;
             sum=0;
        }
    }
    return 0;
}
