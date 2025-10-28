#include <iostream>
using namespace std;
int main()
{
    // straight triangel
    cout << "the straight triangle" << endl;
    for (size_t i = 1; i <= 5; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        // opposite trinangle
    }
    cout << "The opposite triangle" << endl;
    for (size_t i = 5; i >= 1; i--)
    {
        for (size_t j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // space straight before triangle
    cout << "space straight before triangle" << endl;
    for (size_t i = 1; i <= 5; i++) // 1
    {
        for (size_t j = 4; j >= i; j--)
        {
            cout << " ";
        }
        for (size_t k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // space opposite  before triangle
    cout << "space opposite before triangle" << endl;
    for (size_t i = 5; i >= 1; i--) // 1
    {
        for (size_t j = 4; j >= i; j--)
        {
            cout << " ";
        }
        for (size_t k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // the complete triangel
    cout << "The complete triangle" << endl;
    int e = 1;
    for (size_t i = 1; i <= 5; i++)
    {
        for (size_t j = 4; j >= i; j--)
        {
            cout << " ";
        }
        for (size_t k = 1; k <= e; k++)
        {
            cout << "*";
        }
        cout << endl;
        e = e + 2;
    }
    // the opposite complete triangel
    cout << "The opposite complete triangle" << endl;
    int h = 9;
    for (size_t i = 1; i <= 5; i++)
    {
        for (size_t k = 1; k <= h; k++)
        {
            cout << "*";
        }
        cout << endl;
        h = h - 2;
        for (size_t j = 1; j <= i; j++)
        {
            cout << " ";
        }
    }
}