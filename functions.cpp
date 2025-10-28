#include <iostream>
using namespace std;
int sum(int x, int y)
{
    int s = 0;
    s = x + y;
    return s;
}
void print()
{
    cout << "Ahmed is the best programmer in the world" << endl;
}
int main()
{

    int s = 0;
    s = sum(10, 20);
    cout << "Sum = " << s << endl;
    print();
}