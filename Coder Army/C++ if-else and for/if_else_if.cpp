#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter the number: ";
    cin >> number;

    if(number>0){
        cout << "POSITIVE";
    }
    else if(number == 0){
        cout << "0";
    }
    else{
        cout << "NEGATIVE";
    }
}