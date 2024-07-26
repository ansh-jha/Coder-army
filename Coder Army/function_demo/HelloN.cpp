#include <iostream>
using namespace std;
void HelloN(int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << "Hello Coder Army" << endl;
    }
}
int main()
{
    int n;
    cin >> n;

    HelloN(n);
}