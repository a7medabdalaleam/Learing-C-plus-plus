#include <iostream>
using namespace std;
int main()
{
    // example on for loop
    // calculate the numbers odd and even
    int num = 0, co = 0, ce = 0;
    for (size_t i = 0; i < 7; i++)
    {
        cout << "Enter the number: ";
        cin >> num;
        if (num % 2 == 0)
            ce++;
        if (num % 2 != 0)
            co++;
    }
    cout << "the Even numbers are " << ce << endl;
    cout << "the Odd numbers are " << co << endl;
}