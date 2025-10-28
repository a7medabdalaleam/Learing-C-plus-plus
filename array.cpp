#include <iostream>
using namespace std;
int main()
{
    int x[10];
    for (size_t i = 0; i < 10; i++)
    {
        cout << "Enter the index [" << i << "] ";
        cin >> x[i];
    }
    for (size_t i = 0; i < 10; i++)
    {
        cout << "array [" << i << "] = " << x[i] << endl;
    }
}