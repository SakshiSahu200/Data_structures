//Creating multi-dimensional arrays
#include<iostream>
using namespace std;
int main()
{
    int a[][2]={{2,3},{4,5},{6,7}};   //creating a 2-d array
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//double pointer can also be used to create multi-dimension array...skipped it...couldn't understand...refer to 1st lecture of matrix
/* ARRAY OF VECTORS-----advantage---individual rows are of dynamic size of connected array

int m=3,n=2;
    vector<int>a[m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i].push_back(10);}}
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";}
        }                              // 10 10 10 10 10 10


        *********VECTORS OF VECTORS-------no. of rows are also dynamic

int m=3,n=2;
    vector<vector<int>>v2;
    for(int i=0;i<m;i++){
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(10);
        v2.push_back(v);
        }
    for(int i=0;i<v2.size();i++){

