#include <iostream>
using namespace std;
// Factial Example
int main()
{
    int n = 0, fact = 1;
    cout << "Enter the number: ";
    cin >> n;
    for (size_t i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "Factorial of " << n << "! = " << fact << endl;
}