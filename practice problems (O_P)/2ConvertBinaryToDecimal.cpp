// Qs- WAP to check the numbers are pythagorian triplet or not


#include<bits/stdc++.h>
using namespace std;

// fxn to check it is pythagorian triplet or not
int bin(int n){
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
    cout<<n<<" in decimal looks alike : "<<bin(n)<<endl;
    return 0;
}
/* sample input - 1101

-------------output-----------
1101
1101 in decimal looks alike : 13
*/