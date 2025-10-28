#include <iostream>
using namespace std;
int main()
{
    // to a sign array
    int arr1[4] = {1, 2, 3, 4};
    int arr2[4];
    for (size_t i = 0; i < 4; i++)
    {
        arr2[i] = arr1[i];
    }
    for (size_t i = 0; i < 4; i++)
    {
        cout << arr2[i] << endl;
    }
    // مثال علي حاصل الجمع
    int arr3[4] = {100, 200, 200, 500};
    int sum = 0;
    for (size_t i = 0; i < 4; i++)
    {
        sum += arr3[i];
    }
    cout << "Sum = " << sum << endl;
    // مثال علي حاصل الضرب
    int arr4[4] = {100, 200, 200, 500};
    int d = 1;
    for (size_t i = 0; i < 4; i++)
    {
        d *= arr4[i];
    }
    cout << "multi = " << d << endl;
    // مثال علي حمع الاعداد الفردية و الزوجية
    int arr5[4] = {101, 200, 201, 500};
    int sume = 0, sumo = 0;
    for (size_t i = 0; i < 4; i++)
    {
        if (arr5[i] % 2 == 0)
            sume += arr5[i];
        else
            sumo += arr5[i];
    }
    cout << "sum even = " << sume << endl
         << "sum odd = " << sumo << endl;
    // مثال علي اكبر قيمة و اصغر قيمة
    int arr6[6] = {100, 2, 3, 4, 555, 43};
    int mx = arr6[0];
    for (size_t i = 0; i < 6; i++)
    {
        if (arr6[i] > mx)
            mx = arr6[i];
    }
    cout << "The Max is " << mx << endl;
    int arr7[6] = {100, 2, 3, 4, 555, 43};
    int mn = arr7[0];
    for (size_t i = 0; i < 6; i++)
    {
        if (arr6[i] < mn)
            mn = arr7[i];
    }
    cout << "The min is " << mn << endl;
}