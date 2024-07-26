#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool divide(vector<int> arr)
{
    int prefix = 0, totalSum = 0, n = arr.size();
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];
        int ans = totalSum - prefix;
        if (ans == prefix)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;

    vector<int> v(n);
    cout << "Enetr the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> n;
    }

    cout << divide(v);
}