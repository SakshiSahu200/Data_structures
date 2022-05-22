#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[n];
            cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    vector<int>v1(n,0);
    for(int i=1;i<=n;i++)
    {
   int j=a[i];
   v1[j-1]=i;
}
for(auto it=v1.begin();it!=v1.end();it++){
    cout<<*it<<" ";
}
cout<<endl;
v==v1?cout<<"ambiguous":cout<<"unambiguous";
cout<<endl;
return 0;
}
