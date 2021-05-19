#include <bits/stdc++.h>
using namespace std;

int main() {
	int i=1,n,k=1;
	cin>>n;
	while(i<=n){
	    if(i%2!=0){
	        for(int j=1;j<=5;j++){
	            cout<<k<<" ";
	            k++;
	        }
	        cout<<endl;
	    }
	    else{
	        k+=5;
	        for(int j=1;j<=5;j++){
	            cout<<k-1<<" ";
	            k--;
	        }
	        k+=5;
	        cout<<endl;
	    }
	    i++;
	}
	return 0;
}