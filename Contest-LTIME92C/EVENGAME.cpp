// Qs code-EVENGAME

#include <iostream>
using namespace std;

int main() {
	int t, n, sum=0;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	    int arr[n];
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	        sum+=arr[j];
	    }
	    if(sum%2==0){
	     cout<<"1"<<endl;
	    }
	    else{
	     cout<<"2"<<endl;
	    }
	    sum=0;
	 
	}
	 
	return 0;
}
