// Qs code-SUMPOS

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,x,y,z;
	cin>>n;
	for(int i=0; i<n; i++){
	    cin>>x>>y>>z;
	    if(x==(y+z)){
	        cout<<"YES"<<endl;
	    }
	    else if(y==(x+z)){
	        cout<<"YES"<<endl;
	    }
	    else if(z==(x+y)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
