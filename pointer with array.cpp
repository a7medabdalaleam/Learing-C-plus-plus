#include <iostream>
using namespace std;
int main()
{
    int arr[3] = {11, 22, 33};
    cout << arr << endl;        // adress of first element
    cout << *arr << endl;       // value of element one
    cout << *(arr + 1) << endl; // value of element two
    int *ptr;
    ptr = arr;
    for (size_t i = 0; i < 3; i++)
    {
        cout << *(ptr + i) << "  ";
    }
}