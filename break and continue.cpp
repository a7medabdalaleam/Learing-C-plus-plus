#include <iostream>
using namespace std;
int main()
{
    for (size_t i = 1; i < 10; i++)
    {
        if (i == 5)
            continue;
        cout << " i = " << i << endl;
    }
    for (size_t i = 1; i < 10; i++)
    {
        if (i == 5)
            break;
        cout << " i = " << i << endl;
    }
}