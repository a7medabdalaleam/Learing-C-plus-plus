#include <iostream>
using namespace std;
int main()
{
    int n = 0, r = 0;
    cout << "Enter the Number: ";
    cin >> n;
    cout << "Enter the Range: ";
    cin >> r;
    for (size_t i = 1; i <= r; i++)
    {
        cout << i << "*" << n << " = " << i * n << endl;
    }
    // how to write for loop in one line
    for (size_t i = 1; i <= 10; cout << "Good #" << i << endl, i++)
        ;
}