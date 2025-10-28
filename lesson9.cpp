#include <iostream>
using namespace std;
int main()
{
    // short if
    // cout << (5 > 3) ? true : false;
    // cout << endl;
    // int x = (5 > 3) ? 11 : 5;
    // cout << "x = " << x << endl;
    // Logical Operators:
    // int x = 12 && 1;
    // cout << " x = " << x << endl;
    // int y = 12 && 0;
    // cout << " y = " << y << endl;
    // int z = 12 || 0;
    // cout << " z = " << z << endl;
    // Example One
    int x = 0;
    cout << "Enter your Age: " << endl;
    cin >> x;
    char a = '\0';
    cout << "Enter your Genger: " << endl;
    cin >> a;
    if (x >= 18 && a == 'm')
        cout << "Male , man" << endl;
    else if (x <= 18 && a == 'm')
        cout << "male , young" << endl;
    else if (x <= 18 && a == 'm')
        cout << "female , girl" << endl;
    else if (x <= 18 && a == 'm')
        cout << "female , womon" << endl;
}