// Qs code-  FLOW010

#include<iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int t;
    char value;
    cin>>t;
    for (int i = 0; i <t; i++){
        cin>>value;
        if (value=='B' || value=='b'){
            cout<<"BattleShip"<<endl;
        }
        else if (value=='C' || value=='c'){
            cout<<"Cruiser"<<endl;
        }
        else if (value=='D' || value=='d'){
            cout<<"Destroyer"<<endl;
        }
        else if (value=='F' || value=='f'){
            cout<<"Frigate"<<endl;
        }
    }
    return 0;
}
/* 
Input--------------------

3 
B
c
D

Output-----------------
BattleShip
Cruiser
Destroyer
*/