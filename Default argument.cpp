#include <iostream>
using namespace std;
int sum(int x, int y = 5)
{
    return x + y;
}
int sum(int x, int y = 5, int z)
{
    return x + y + z;
} // error  ما ينفعش تحط في النصف و تسيب الباقي
int main()
{
    cout << sum(19) << endl;
}