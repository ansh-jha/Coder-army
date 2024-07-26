#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << sizeof(arr)/ sizeof(arr[0]) << endl;

    int ans = INT8_MAX;
    // min in an array
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
        }
    }
    cout << ans << endl;

    // max in an array
    ans = INT8_MIN;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    cout << ans << endl;
}