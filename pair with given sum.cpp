//for the unsorted array, check if the pair with given sum is present or not
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool Is_pair(int a[],int n,int sum)
{
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        if(s.find(sum-a[i])!=s.end())
        return true;
        else
            s.insert(a[i]);
    }
    return false;
}

int main()
{
    //we will traverse the array and will search for sum-currvalue, if exist then pair is there otherwise not
    int n,sum;
    cin>>n>>sum;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<Is_pair(a,n,sum);
    return 0;
}
