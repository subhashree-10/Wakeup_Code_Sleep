#include <bits/stdc++.h>
using namespace std;

int main() {
	int oddSum=0,evenSum=0,oddTemp=1,evenTemp=2,n;
	cin>>n;
	while(n--){
	    
	    oddSum += oddTemp;
	    oddTemp+=2;
	    
	    
	    evenSum += evenTemp;
	    evenTemp+=2;
	}
	cout<<oddSum<<" "<<evenSum;
	return 0;
}
