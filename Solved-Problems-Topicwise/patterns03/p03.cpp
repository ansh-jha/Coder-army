#include<iostream>
using namespace std;

int main(){

    for(int row=1; row<=4; row++){
        for(int col=1; col<= 4-row; col++){
            cout << "  ";
        }
        for(int col=1; col<= row; col++){
            cout << col << " ";
        }
        cout << endl;
    }
}
