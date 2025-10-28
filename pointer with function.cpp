#include <iostream>
using namespace std;
int pointer(int *p)
{
    *p = *p + 1;
    return *p;
}
int main()
{
    int val = 5;
    cout << pointer(&val) << endl;
    cout << val << endl;
}