#include<iostream>
using namespace std;

int main(){
    int num,n;
    cin >> n;
    int pow;
    cin >> pow;
    num = n;
    for(int i=1; i<pow; i++){
        num = num*n;
    }
    cout << num;

}