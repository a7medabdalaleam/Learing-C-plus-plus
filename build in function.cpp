#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    // in module called <cmath>
    cout << log(10) << endl;
    cout << log10(10) << endl;
    cout << fmod(10.5, 2) << endl;
    cout << sqrt(100) << endl;
    cout << fabs(-100) << endl;
    cout << ceil(10.5) << endl;
    cout << floor(10.5) << endl;
    cout << pow(10, 2) << endl;
    // in module called <algorithm>
    cout << max(10, 22) << endl;
    cout << max(10, max(4, 3)) << endl;
    cout << min(10, 22) << endl;
    int x = 0, y = 10;
    swap(x, y);
    cout << "x = " << x << "      y = " << y << endl;
}