#include <iostream>
using namespace std;
int main()
{
    // int c = 0;
    // while (c < 5)
    // {
    //     cout << "c = " << c << endl;
    //     c++;
    // }
    // First Example
    // int c = 0, num = 0, sum = 0;
    // while (c < 4)
    // {
    //     cout << "Enter Number: ";
    //     cin >> num;
    //     sum += num;
    //     c++;
    // }
    // cout << "The Sum is " << sum << endl;
    // Second Example
    int c = 0, num = 0, sum = 0;
    do
    {
        cout << "Enter Number: ";
        cin >> num;
        sum += num;
        c++;
    } while (false);
    cout << "The Sum is " << sum << endl;
}