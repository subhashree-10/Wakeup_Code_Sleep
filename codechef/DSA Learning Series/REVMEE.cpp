#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,n1;
	cin>>n;
	n1=n-1; // for index
	int arr[n],rev[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    rev[n1] = arr[i];
	    n1--;
	}
	for(int i=0;i<n;i++){
	    cout<<rev[i]<<" ";
	}
	return 0;
}