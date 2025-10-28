#include <iostream>
using namespace std;
int x = 10; // this is a global variable
int main()
{
    int x = 5;
    {
        int x = 20;
        cout << "the global x is " << ::x << endl;
    }
    cout << "x = " << x << endl;
}
