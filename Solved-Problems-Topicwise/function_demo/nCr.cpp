#include <iostream>
using namespace std;
int Fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int Facti(int r)
{
    int fact = 1;
    for (int i = 1; i <= r; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int Facto(int n, int r)
{
    int fact = 1;
    int ans = (n - r);
    for (int i = 1; i <= ans; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int Factorial(int n, int r)
{
    int nFact = Fact(n);
    int rFact = Facti(r);
    int nMinr = Facto(n, r);
    int answer = (nFact) / (rFact * nMinr);
    return answer;
}
int main()
{
    int n, r;
    cin >> n >> r;

    cout << Factorial(n, r) << endl;
}