// Qs code FLOW006

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, sum=0, temp, n;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>n;
	    while(n!=0){
	        sum= sum + n%10;
	        n= n/10;
	    }
	    cout<<sum<<endl;
	    sum=0;
	}
	return 0;
}
