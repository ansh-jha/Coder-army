#include<iostream>
using namespace std;

int main(){
    for(int row=1; row<=4; row++){
        char name = 'A';
        for(int col=1; col<= 4-(row-1); col++){
            cout << name << " ";
            name++;
        }
        cout << endl;
    }
}