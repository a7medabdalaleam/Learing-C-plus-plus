#include <iostream>
using namespace std;
int main()
{
    int arr1[5];
    cout << "Enter the Elements : " << endl;
    for (size_t i = 0; i <= 5; i++)
    {
        cin >> arr1[i];
    }
    int e = 0;
    cout << "Enter the element that you'r looking for : ";
    cin >> e;
    bool found = false;
    int i;
    for (i = 0; i < 5; i++)
    {
        if (e == arr1[i])
        {
            found = true;
            break;
        }
    }
    if (found)
        cout << e << " found in position " << i << endl;
    else
        cout << "Not found" << endl;
}