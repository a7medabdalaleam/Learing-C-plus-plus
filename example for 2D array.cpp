#include <iostream>
using namespace std;
int main()
{
    int mark[5][5];
    for (size_t r = 0; r < 5; r++)
    {
        for (size_t c = 0; c < 5; c++)
        {
            cout << "Enter mark #" << c + 1 << " for student #" << r + 1 << endl;
            cin >> mark[r][c];
        }
    }
    double avr[5];
    double s;
    for (size_t r = 0; r < 5; r++)
    {
        for (size_t c = 0; c < 5; c++)
        {
            s = 0;
            s = s + mark[r][c];
            avr[r] = s / 5;
            cout << "Avarage of student #" << r + 1 << "= " << avr[r] << endl;
        }
    }
}