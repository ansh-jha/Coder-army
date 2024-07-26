#include <iostream>
using namespace std;

int main()
{
    int n;
    int rem, ans = 0, mul = 1;
    cout << "Enter thr number: ";
    cin >> n;

    while (n > 0)
    {
        rem = rem % 2;
        n = n / 2;
        ans = rem * mul + ans;
        mul = mul * 10;
    }
    cout << ans << endl;
}