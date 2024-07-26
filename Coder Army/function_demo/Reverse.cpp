#include <iostream>
using namespace std;

int reverse(int n)
{
    int rev = 0, rem;
    while (n)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    return rev;
}
int main()
{
    int num;
    cin >> num;

    cout << reverse(num) << endl;
}