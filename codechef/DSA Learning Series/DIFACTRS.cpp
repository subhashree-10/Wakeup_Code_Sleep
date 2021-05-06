#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    int n,k=0, count=0;
    cin>>n;
    int arr[n];
    for (int i = 1; i <=n; i++){
        if(n%i==0){
            arr[k]=i;
            k++;
            count++;
        }
    }
    cout<<count<<endl;
    for (int i = 0; i < count; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}