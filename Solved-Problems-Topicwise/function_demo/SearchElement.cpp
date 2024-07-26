#include <iostream>
using namespace std;
int SearchElement(int n, int arr[], int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return x;
        }
    }
    return -1;
}
int main()
{
    int n, x;
    cin >> n >> x;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << SearchElement(n, arr, x) << endl;
}