#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void subArraySum(int a[],int sum)
{
    int currsum=0,start=0,end=-1;
    HashMap<Integer,Integer>map=new HashMap<>();
    for(int i=0;i<n;i++){
        currsum+=a[i];
        if(currsum==sum){
            start=0; end=i;
            break;}
        if(map.containsKey(currsum-sum){
           start=map.get(currsum-sum)+1;
           end=i;
           break;
           }
        map.put(currsum,i);
    }

}


int main()
{

}
