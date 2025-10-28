#include <iostream>
using namespace std;
int main()
{
    int *ptr;
    int val = 5;
    ptr = &val;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &val << endl;
    void *p;
    float val1 = 3.45;
    p = &val1;
    float *i = static_cast<float *>(p);
    cout << *i << endl;
}