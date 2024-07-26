#include <iostream>
using namespace std;
int cube(int n)
{
    return n * n * n;
}
int main()
{
    int num;
    cin >> num;

    cout << cube(num) << endl;
}
