#include <iostream>
using namespace std;

int Sum(int m, int n)
{
    int ans = m + n;
    return ans;
}

int main()
{
    int a, b;
    cout << "Enter a and b:";
    cin >> a >> b;
    cout << Sum(a, b);
}