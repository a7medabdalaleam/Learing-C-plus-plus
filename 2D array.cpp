#include <iostream>
using namespace std;
int main()
{
    int arr[3][4];
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int arr2[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    // to sum two dimensional array
    int sum = 0;
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            sum += arr2[i][j];
        }
    }
    cout << "Sum of Arry number two is " << sum << endl;
}