// Qs code-INTRVS

#include <iostream>
using namespace std;

int main() {
	int t, n, k, count=0, rejected=0, slow=0, bot=0, accepted=0;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n>>k;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin>>a[j];
	        if(a[j]==(-1)){
	            count++;
	        }
            if(a[j]>=k){
	            slow++;
	        }
            if(a[j]==1){
	            bot++;
	        }
        }
        
	    // checking condiction
	    if(count>= n/2){
	        rejected=1;
	    }
	    
	    if((rejected==0) && (slow!=0)){
	        cout<<"Too Slow";
            slow=0;
	    }
        if(bot==n){
	        cout<<"Bot";
            bot=0;
	    }
	    if (rejected==1)
        {
            cout<<"Rejected";

        }
        if ((rejected==0)&&(bot==0)&&(slow==0))
        {
            cout<<"Accepted";
        }
        
	}
	return 0;
}