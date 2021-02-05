#include<iostream>
#include<string>
using namespace std;
int main()
{
 string s;
 cin>>s;
 int c=0;
 int l=0;
 int h=s.size()-1;
 
 while(h>1){
     if(s[l++]!=s[h--])
     {
         c=-1;
         
     }
     else
     {
         c=0;
     }
     
 }
    if(c==0)
     cout<<"palindeome";
     else
     {
         cout<<"not a palindrome";
     }
     
 
 return 0;
}