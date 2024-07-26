#include <iostream>
#include <cmath>
using namespace std;

bool Armstrong(int num, int digit)
{
    int n = num, ans = 0, rem;
    while (n)
    {
        rem = n % 10;
        n /= 10;
        ans = ans + pow(rem, digit);
    }
    if (ans == num)
        return true;
    else
        return false;
}
int countDigit(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }
    return count;
}

int main()
{
    int num;
    cin >> num;

    int digit = countDigit(num);
    cout << Armstrong(num, digit);
}