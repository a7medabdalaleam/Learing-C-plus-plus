#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    float y = 12.34;
    cout << x + y << endl; // type casting
    cout << x + int(y) << endl;
    cout << x + (int)y << endl;
    cout << x + static_cast<int>(y) << endl;
}