#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;

	while(t--){
	    cin>>n;
	    if(n%2==1){
	        int k=n/2;
	        if(k%2==0)
	        cout<<n-1;
	        else
	        cout<<n;
	    }
	    else
	    {
	            int k=n/2;
	        if(k%2==0)
	        cout<<n;
	        else
	        cout<<n-2;
	    }

	    cout<<endl;
	}
	return 0;
}
