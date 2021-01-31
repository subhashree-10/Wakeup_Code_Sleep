#include<iostream>
#include<string>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    string s;
	    cin>>s;
	    int n=s.size(),mid=n/2;
	    int temp[26]={0};
	    bool lap=true;
	    for(int j=0;j<mid;j++)
	    {
	        int x=s[j]-'a';
	        temp[x]++;
	    }
	    if(n%2!=0)
	    {
	      mid=mid+1;  
	    }
	    for(int j=mid;j<n;j++)
	    {
	        int x=s[j]-'a';
	        temp[x]--;
	    }
	    for(int j=0;j<26;j++)
	    {
	        if(temp[j]!=0 )
	        {
	           lap=false;
	           break;
	        }
	    }
	    if(lap)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
