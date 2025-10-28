#include <iostream>
using namespace std;
int main()
{
    // first example
    // int x = 0;
    // cin >> x;
    // if (x > 0)
    //     cout << "the is positive" << endl;
    // else
    //     cout << "the number is negative" << endl;
    // ############################################
    // second example
    //    int x = 0, y = 0;
    // cin >> x >> y;
    // if (x > y)
    //     cout << "the x is bigger that y " << endl;
    // else if (x < y)
    //     cout << "the y is bigger the x " << endl;
    // else
    //     cout << "both are equal" << endl;
    // ##############################################
    // Example three
    // int x, y;
    // cin >> x >> y;
    // if (x % 2 == 0)
    // {
    //     cout << "the number is Even" << endl;
    //     cout << "the number is even" << endl;
    // }
    // else
    //     cout << "the number is ood " << endl;
    // Example four Nested Loop
    int x;
    cin >> x;
    if (x % 2 == 0)
    {
        cout << "it's Even" << endl;
        if (x > 10)
            cout << "it's OK" << endl;
        else
            cout << "it's not OK" << endl;
    }
    else
        cout << "the it's Odd" << endl;
}