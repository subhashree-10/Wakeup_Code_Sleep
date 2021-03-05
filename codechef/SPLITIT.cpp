// Qs code-SPLITIT
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string s;
	    cin>>n>>s;
	    
	    char c = s[n-1];
	    bool ans = 0;
	    for(int i = 0;i<n-1;i++)
	    {
	        if(c==s[i]){ 
	            ans = 1;
	            break;
	        }
	    }
	    if(ans==1)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}