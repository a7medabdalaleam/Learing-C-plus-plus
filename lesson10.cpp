#include <iostream>
using namespace std;
int main()
{

    switch (1)
    // switch(4+3) it will work
    //  switch (3/2) it not work
    //  int x=3 switch(x/2 ) it will work
    //  float x=3 switch(x/2 ) it not work
    {
    case 1:
        cout << "Case #1" << endl;
        break;
    case 2:
        cout << "Case #2" << endl;
        break;
    case 3:
        cout << "Case #3" << endl;
        break;
    case 4:
        cout << "Case #4" << endl;
        break;
    default:
        break;
    }
    switch ('a')
    {
    case 'a':
        cout << "Case #1" << endl;
        break;
    case 'b':
        cout << "Case #2" << endl;
        break;
    case 'c':
        cout << "Case #3" << endl;
        break;
    case 'd':
        cout << "Case #4" << endl;
        break;
    default:
        break;
    }
}