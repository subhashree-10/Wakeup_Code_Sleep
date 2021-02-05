#include<iostream>
#include<string>
using namespace std;
int main()
{
 string s;
 int count=0;
 cin>>s;
 for(int i=0;i<s.length();i++)
 {
    if(s[i]=='0' || s[i]=='1')
    {
        count++;
    }
    else{
        count=0;
    }
 }
    if(count==s.length())
    {
        cout<<"it is a binary string!";
    }
    else
    {
        cout<<"it is not a binary string!";
    }
 
 return 0;
}