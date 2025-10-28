#include <iostream>
using namespace std;
// دالة لجمع الارقام
int sum(int n)
{
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}
// 1 2 3 4 5
// دالة لجمع الارقام في فترة
// 4 5 6
int sum_period(int x, int y)
{
    if (x == y)
        return x;
    else
        return y + sum_period(x, y - 1);
}
void o_straight_triangle(int n)
{
    if (n < 0)
        return;
    else
        for (size_t i = 1; i <= n; i++)
        {
            cout << "*";
        }
    cout << endl;
    o_straight_triangle(n - 1);
}
void straight_triangle(int n)
{
    if (n < 0)
        return;
    straight_triangle(n - 1);
    for (size_t i = 1; i <= n; i++)
    {
        cout << "*";
    }
    cout << endl;
}
int main()
{
    straight_triangle(5);
}