#include<iostream>
#include<string>
using namespace std;
void swap()
{
    string s1,s2;
    cin>>s1>>s2;
    string temp;
    temp=s1;
    s1=s2;
    s2=temp;
    cout<<"strings swapped using user-defined swap function:\n"<<"s1="<<s1<<"\n"<<"s2="<<s2;
    }
int main()
{
  string s1,s2;
  cin>>s1>>s2;
  //using string library function
  s1.swap(s2);
  cout<<"strings swapped using string library function:\n"<<"s1="<<s1<<"\n"<<"s2="<<s2;
  swap();
 return 0;
}