#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    string str;
    int i=0;
    cin>>str;
    if (str[i]>='A' && str[i]<='Z'){ //1st letter is in upper case
        cout<<str<<endl;
    }
    else if(str[i]>='a' && str[i]<='z'){ // 1st letter is in lower case converting it to upper case
        str[0]-=32;
        cout<<str<<endl;
    }
    return 0;
}