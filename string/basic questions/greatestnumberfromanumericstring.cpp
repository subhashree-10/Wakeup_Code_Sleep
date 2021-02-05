#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  string s;
  cin>>s;
  sort(s.begin(),s.end(),greater<int>());
  cout<<"gretest no using  library sort function"<<s;

 return 0;
}