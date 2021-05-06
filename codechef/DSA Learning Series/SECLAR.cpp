#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    int arr[3];
    for (int i = 0; i < 3; i++){
        cin>>arr[i];
    }
    sort(arr,arr+3); // arr+3 here 3 is no of elements
    cout<<arr[1]<<endl;
    return 0;
}