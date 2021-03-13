// Qs- WAP to convert binary no to decimal no


#include<bits/stdc++.h>
using namespace std;

// fxn to convert binary To Decimal
int binaryToDecimal(int n){
    int result=0, remainder, i=0;
    while (n !=0){
        remainder = n%10;
        result = remainder*(pow(2,i)) + result;
        n=n/10;
        i++;
    }
    return result;
}

int main(int argc, char const *argv[]){
    int n; // binary no is in
    cin>>n;
    cout<<n<<" is a binary no. After conversion to decimal it looks alike : "<<binaryToDecimal(n)<<endl;
    return 0;
}
/* sample input - 1101

-------------output-----------
1101
1101 is a binary after conversion to decimal it looks alike : 13
*/