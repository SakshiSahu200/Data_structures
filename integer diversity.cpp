#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int j=1;j<=n;j++){
            cin>>a[j];
        }             //  -100<=a[j]<=100
        int arr[201]={0};
        for(int j=1;j<=n;j++){
            arr[a[j]+100]++;
            if(arr[a[j]+100]>3)
                arr[a[j]+100]=2;
            if(a[j]==0)
                arr[a[j]+100]=1;
        }
        int sum=0;
        for(int i=0;i<=200;i++){
                sum+=arr[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
