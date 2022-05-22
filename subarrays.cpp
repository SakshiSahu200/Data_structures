#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--){
    cin>>n;
    signed long long int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    for(int j=0;j<n;j++){
             int count=1;
    for(int i=j+1;i<n;i++){

        if(a[i]>0&&a[i+1]<0)
            count++;
        else if(a[i]<0&&a[i+1]>0)
            count++;
        else
            break;}
        cout<<count<<" ";
    }
        cout<<endl;
    }
    return 0;
}
