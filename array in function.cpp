#include <iostream>
#include <algorithm>
using namespace std;
const int s = 5;
// داله ازاي تدي عناصر لل Array
void set(int arr[])
{
    for (size_t i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
}
// ازاي تطبع عناصر من ال Array
void print(int arr[])
{
    for (size_t i = 0; i < s; i++)
    {
        cout << arr[i] << "  ";
    }
}
// داله لترتيب ال Array
void sort(int arr[])
{
    int t;
    for (size_t i = 0; i < s - 1; i++)
    {
        for (size_t j = 0; j < s - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}
// دالة عكس ال Array
void reserse(int arr[])
{
    for (size_t i = 0; i < s / 2; i++)
    {
        swap(arr[i], arr[s - i - 1]);
    }
}
int main()
{
    int a[5];
    set(a);
    reserse(a);
    print(a);
}