#include<iostream>
using namespace std;

int main(){
    int week;
    cin >> week;

    if(week == 1){
        cout << "Monday";
    }
    else if(week == 2){
        cout << "Tuesday";
    }
    else if(week == 3){
        cout << "wednesday";
    }
    else if(week == 4){
        cout << "Thursday";
    }
    else if(week == 5){
        cout << "Friday";
    }
    else if(week == 6){
        cout << "Saturday";
    }
    else{
        cout << "Sunday";
    }
}