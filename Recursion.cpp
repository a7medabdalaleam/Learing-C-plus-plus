#include <iostream>
using namespace std;
void f(int n)
{
    if (n < 1)
        return; // base case الحزء اللي يجعل الدالة تقف
    else
        cout << "Round #" << n << endl; // logic
    f(n - 1);                           // sub problem تقسيم الدالة عشان نطلع بالحل
}
// factorial Function with recursion
int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
// factorial Function without recursion
void factmanual(int n = 0)
{
    int fact = 1;
    for (size_t i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Fact of " << n << "! is " << fact << endl;
}
int main()
{
    cout << "Fact of 5! is " << fact(5) << endl;
    factmanual(5);
}