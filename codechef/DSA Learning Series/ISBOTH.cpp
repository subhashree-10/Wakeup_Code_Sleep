#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    int n;
    cin>>n;
    if (n%5==0 || n% 11== 0){
        if(n%5==0 && n% 11== 0)
           cout<<"BOTH"<<endl;
        else{
            cout<<"ONE"<<endl;
        }  
    }
    else{
        cout<<"NONE"<<endl;
        }
    
    return 0;
}