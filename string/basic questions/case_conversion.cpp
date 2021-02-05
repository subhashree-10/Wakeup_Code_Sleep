#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void uppercase(string s)
{
    cout<<"string in upper case:\n";
   // for(int i=0;i<s.size();i++)
   // {
   //     
   //     //convert the string to upper case
   //     
   //     if(s[i]>=65 && s[i]<=90)
   //     {
   //         cout<<s[i];
   //     }
   //     else
   //     {
   //         s[i]-=32;
   //         cout<<s[i];
   //     }
   // } using loop
   transform(s.begin(),s.end(),s.begin(),::toupper);
   cout<<s<<endl;
  

}
void lowercase(string s)
{
    cout<<"string in lower case:\n";
   // for(int i=0;i<s.size();i++)
   // {
   //     //convert the string to lower case
   //    if(s[i]>='a' && s[i]<='z')
   //     {
   //         cout<<s[i];
   //     }
   //     else
   //     {
   //         s[i]+=32;
   //         cout<<s[i];
   //      }
   // }using loops
   //using library function
   transform(s.begin(),s.end(),s.begin(),::tolower);
   cout<<s;
}
int main()
{
string s;
cin>>s;
uppercase(s);
lowercase(s);
 return 0;
}