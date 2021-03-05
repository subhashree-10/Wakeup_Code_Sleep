#include<iostream>
using namespace std;

int find_total_water(int arr[], int n){
    int total_water = 0; // ans
    // as we are counting water units so we can ignore 1st and last index, as they cant have water
    for (int i = 1; i < n-1; i++){ 
        int left_max = find_left_max(arr, n,i);
        int right_max = find_right_max(arr, n,i);
        total_water = total_water + min(left_max, right_max) - arr[i];
    }
    return total_water;
}
int find_left_max(int arr[], int n, int i){
    int maximum = 0;
    for (int j = 0; j <= i; j++){
        maximum = max(maximum, arr[i]);
    }
    return maximum;
}
int find_right_max(int arr[], int n, int i){
    
    int maximum = 0;
    for (int j = n-1; j >= i; j--){
        maximum = max(maximum, arr[i]);
    }
    return maximum;
}

int main(int argc, char const *argv[]){
    
    return 0;
}