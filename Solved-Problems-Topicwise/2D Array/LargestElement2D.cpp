#include <iostream>
using namespace std;
int largest = INT16_MIN;
int LargestElement(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > largest)
                largest = arr[i][j];
        }
    }
    return largest;
}
int main()
{
    int arr[3][3] = {3, 4, 5, 1, 2, 11, 6, 7, 9};

    cout << LargestElement(arr, 3, 3);
}