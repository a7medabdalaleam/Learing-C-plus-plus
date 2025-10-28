#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}
int main()
{
    int x = 10, y = 20;
    y = x + y;
    x = y - x;
    y = y - x;
    y = x ^ y; // use beet wise
    x = y ^ x;
    y = y ^ x;
    cout << "X = " << x << "  " << "Y = " << y << endl;
}