// Qs- WAP to check the numbers are pythagorian triplet or not

// Here 3 no are giveni.e, a,b,c. where (max{a,b,c})'2 = sum of squares of rest 2 no

#include<bits/stdc++.h>
using namespace std;

// fxn to check it is pythagorian triplet or not
bool check(int x, int y, int z){
    int a = max(x, max(y,z)); // storing max in a
    int b, c;

    //storing rest 2 elements in b,c
    if (a==x){ 
        b=y; c=z;}
    else if (b==y){ 
        b=x; c=z;}
    else { 
        b=x; c=y;}

    if(a*a == b*b + c*c){ return true; }
    else{ return false; }  
}

int main(int argc, char const *argv[]){
    int x,y,z;
    cin>>x>>y>>z;
    if (check(x,y,z)){
        cout<<"pytrhagorean Triplet "<<endl;}
    else{
        cout<<"Not a pytrhagorean Triplet "<<endl;}   
    return 0;
}
/* sample input - 3,4,5

-------------output-----------
pytrhagorean Triplet
*/