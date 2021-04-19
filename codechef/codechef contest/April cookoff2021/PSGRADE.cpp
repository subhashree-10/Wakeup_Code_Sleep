#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    int t,Amin,Bmin,Cmin,Tmin,A,B,C;
    cin>>t;
    while (t){
        cin>>Amin>>Bmin>>Cmin>>Tmin>>A>>B>>C;
        if ((A>=Amin)&&(C>=Cmin)&&(B>=Bmin) && (A+B+C>=Tmin))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;  
        t--;
    }
    
    return 0;
}