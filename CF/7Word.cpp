#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    string str;
    int count=0;
    cin>>str;
    for (int i = 0; i < str.length(); i++){
        if(str[i]>=65 && str[i]<=90)
            count++;
    }
    if (count>(str.length()/2)){ //more no of char are at upper case
        for (int i = 0; i < str.length(); i++){
        if(str[i]>=97 && str[i]<=122) // converting rest of the lower case elements into uppercase
            str[i]-=32;
        }
    }
    else{ // more no of lower case
        for (int i = 0; i < str.length(); i++){
        if(str[i]>=65 && str[i]<=90) // converting rest of the upper case elements into lowercase
            str[i]+=32;
        }
    }
    cout<<str;
    return 0;
}