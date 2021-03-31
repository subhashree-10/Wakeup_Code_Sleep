#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    int arr[5][5], ai, aj, count=0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin>>arr[i][j]; 
            if(arr[i][j]==1){
                ai = i;
                aj = j;
                break;
            }
        }
    }

    while ((ai != 2)){ // fixing rows
        if(ai < 2){
            arr[ai +1][aj];
            ai+=1;
            count++;
        }
        if(ai > 2){
            arr[ai -1][aj];
            ai-=1;
            count++;
        }
    }
    while ((aj != 2)){ // fixing columns
        if(aj < 2){
            arr[ai][aj+1];
            aj+=1;
            count++;
        }
        if(aj > 2){
            arr[ai][aj-1];
            aj-=1;
            count++;
        }
    }
    cout<<count<<endl;   
    return 0;
}
/* --------input--------------
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
----------output------------
3


--------input--------------
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
----------output------------
1


*/