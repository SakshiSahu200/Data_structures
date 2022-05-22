#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int one=0,two=0;
        for(int i=0;i<n;i++){
            if(a[i]%3==1)
                one++;
            else if(a[i]%3==2)
                two++;
        }
        if(one==two)
            cout<<one;
        else
            cout<<"-1";
        cout<<endl;
    }
    return 0;
}
