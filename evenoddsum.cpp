#include<iostream>
using namespace std;
int main()
{
    int e1=0,e2=0,o1=0,o2=0,a,b,t;
    cin>>t;
    int k=0;
    while(t--){
        cin>>a>>b;
        k=(a/2)*(b/2);
        a%2==0?e1=1:o1=1;
        b%2==0?e2=1:o2=1;
        if(e1==1&&e2==1){
            cout<<(a*b)/2;
        }
         if(o1==1&&o2==1){
                int c=0;

         c=((a+1)/2)*((c+1)/2);
            cout<<k+c;
        }
         if(o1==1&&e2==1){
                int r=0;
         r=((a+1)/2)*(b/2);
            cout<<k+r;
        }
         if(e1==1&&o2==1){
                int j=0;
         j=((a/2)*((b+1)/2));
            cout<<j+k;
        }

        cout<<endl;}
    return 0;
}
