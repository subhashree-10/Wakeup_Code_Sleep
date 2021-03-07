// Qs- WAP to convert octal no to decimal no


#include<bits/stdc++.h>
using namespace std;

// fxn to convert octal To Decimal
int octalToDecimal(int n){
    int result=0, remainder, i=0;
    while (n !=0){
        remainder = n%10;
        result = remainder*(pow(8,i)) + result;
        n=n/10;
        i++;
    }
    return result;
}

int main(int argc, char const *argv[]){
    int n; // octal no is in
    cin>>n;
    cout<<n<<" is an octal no. After conversion to decimal it looks alike : "<<octalToDecimal(n)<<endl;
    return 0;
}
/* sample input - 20

-------------output-----------
20
20 is an octal no. After conversion to decimal it looks alike : 16
*/