#include <iostream>
using namespace std;
int main()
{
    // draw square
    cout << "Draw Square" << endl;
    for (size_t i = 1; i <= 9; i++)
    {
        for (size_t j = 1; j <= 9; j++)
        {
            if (i == 1 || i == 9)
                cout << "*";
            else if (j == 1 || j == 9)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    // Draw the letter (x)
    cout << "Draw the letter (X)" << endl;
    for (size_t i = 1; i <= 5; i++)
    {
        for (size_t j = 1; j <= 5; j++)
        {
            if (i == j || j == 6 - i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    // Draw The letter (z)
    cout << "Draw The letter (Z)" << endl;
    for (size_t i = 1; i <= 5; i++)
    {
        for (size_t j = 1; j <= 5; j++)
        {
            if (j == 6 - i || i == 1 || i == 5)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    // Draw The letter (E)
    cout << "Draw The letter (E)" << endl;
    for (size_t i = 1; i <= 5; i++)
    {
        for (size_t j = 1; j <= 5; j++)
        {
            if (j == 1 || i == 1 || i == 3 || i == 5)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}