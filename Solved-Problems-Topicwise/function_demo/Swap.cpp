#include <iostream>
using namespace std;
void swap(int &a, int &b, int &c)
{
    a = b;
    b = c;
    c = a;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    swap(a, b, c);
    cout << a << b << c;
}