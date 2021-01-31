// FLOW004

#include <iostream>
using namespace std;
int fast(int num){
    int temp=0;
    while(num!=0){
	   temp = num%10;
	   num= num/10;
	   if(num==0){
	       return temp;
	   }
    }
}
int main() {
	// your code goes here
	int t, n, last=0;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>n;
	    last=n%10;
	    cout<< last + fast(n)<<endl;
	}
	return 0;
}

