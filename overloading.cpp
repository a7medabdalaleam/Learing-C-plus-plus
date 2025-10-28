#include <iostream>
using namespace std;
void print(int x)
{
    cout << "x = " << x << endl;
}
void print(double x)
{
    cout << "x = " << x << endl;
}
void print(char x)
{
    cout << "x = " << x << endl;
}
int main()
{
    print('c');
    print(4);
    print(4.2);
}