#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int i = 2, count;
    while (i < n)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 1)
    {
        cout << "Not Prime" << " ";
    }
    else
    {
        cout << "Prime"
             << " ";
    }
} // namespace std;
