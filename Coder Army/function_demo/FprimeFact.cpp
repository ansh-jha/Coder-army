#include <iostream>
using namespace std;

void prime(int n)
{
    if (n < 2)
    {
        cout << 0 << endl;
        return;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << 0 << endl;
            return;
        }
    }
    cout << 1 << endl;
    return;
}
int Fact(int n = 3)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}
int main()
{
    int a, b;
    cout << "Enter the values:" << endl;
    cin >> a >> b;

    prime(a);

    cout << Fact() << endl;

    prime(b);

    cout << Fact(a) << endl;
    cout << Fact(b) << endl;
}