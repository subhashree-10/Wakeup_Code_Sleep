// Qs- WAP to convert hexadecimal no to decimal no


#include<bits/stdc++.h>
using namespace std;

// fxn to convert octal To Decimal
int hexadecimalToDecimal(string n){
    int ans = 0;
    int x = 1;
    int s = n.size();
    for (int i = s-1; i >=0; i--){ //loop from last element to 1st element
        if (n[i] >='0' && n[i]<='9'){
            ans += x*(n[i]-'0'); // let n=12BF and n[i]=2, calculation will be 2-0=2
        }// Here 0 was written just to eliminate char '0'

        else if(n[i] >='A' && n[i]<='F'){
            ans += x*(n[i]-'A' +10); // let n=12BF and n[i]=F, calculation will be F-A +10 = 5+10 = 15
        }
        x *= 16; // power of 16 rises after each iteration
    }
    return ans;
}

int main(int argc, char const *argv[]){
    string n; // hexadecima no is in
    cin>>n;
    cout<<n<<" is a hexadecimal no. After conversion to decimal it looks alike : "<<hexadecimalToDecimal(n)<<endl;
    return 0;
}
/* sample input - 1CF

-------------output-----------
1CF
1CF is a hexadecimal no. After conversion to decimal it looks alike : 463
*/