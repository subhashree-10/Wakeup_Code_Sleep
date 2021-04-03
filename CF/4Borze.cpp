#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    string str;
    cin>>str;
    for (int i = 0; i < str.length(); i++){
        if ((str[i] =='-') && (str[i+1]=='.')){
            cout<<"1";
            i++;
            }
        else if ((str[i] =='-') && (str[i+1]=='-')){
            cout<<"2";
            i++;
            }
        else {
            cout<<"0"; 
            }    
    }
    return 0;
}