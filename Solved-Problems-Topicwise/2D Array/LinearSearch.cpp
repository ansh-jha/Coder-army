#include <iostream>
using namespace std;

int main()
{
    int arr[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int target = 7;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
            {
                cout << i << " " << j;
                return 0;
            }
        }
    }
    cout << -1;
}