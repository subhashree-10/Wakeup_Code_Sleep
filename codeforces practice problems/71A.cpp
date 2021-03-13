// A. Way Too Long Words

#include<iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int n, len=0;
    string str;
    cin>>n;
    while (n){
        cin>>str;
        if (str.length()>10){
            len = str.length()-2;
            cout<<str[0]<<len<<str[str.length()-1]<<endl;
        }
        else{
            cout<<str<<endl;
        }       
        n--;
    }   
    return 0;
}