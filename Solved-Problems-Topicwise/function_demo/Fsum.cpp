#include <iostream>
using namespace std;

int Sum(int m, int n)
{
    int ans = m + n;
    return ans;
}

int Mul(int m, int n)
{
    int ans = m * n;
    return ans;
}
void func()
{
    cout << "Hello Coder Army!";
}
int main()
{
    int a, b;
    cout << "Enter the value of a and b:";
    cin >> a >> b;

    cout << Sum(a, b);
    cout << endl;
    cout << Mul(a, b);
    cout << endl;
    func();
}