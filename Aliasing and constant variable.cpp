#include <iostream>
using namespace std;
int main()
{
    // Example for Aliasing
    int x = 1;
    int &y = x;
    y = 50;
    cout << "X = " << x << endl;
    // Example for constant variable
    const double pi = 3.14;
    cout << "The Rudius : " << endl;
    int r = 0;
    cin >> r;
    double a = 0;
    a = pi * r * r;
    cout << "Area of the circle = " << a << endl;
}