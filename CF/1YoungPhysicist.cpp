#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    int n, i=0,t, sumx=0, sumy=0, sumz=0;
    cin>>n;
    t=n;
    int arrx[n],arry[n],arrz[n];
    while (t){
        cin>>arrx[i]>>arry[i]>>arrz[i];
        
        sumx= sumx+arrx[i];
        sumy= sumy+arry[i]; 
        sumz= sumz+arrz[i];
        i++;
        t--;
    }
    if (sumx==0 && sumy==0 && sumz==0 )
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;  
    return 0;
}