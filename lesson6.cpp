#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    cin >> x;
    // x=x+10;
    x += 10;
    cout << "x = " << x << endl;
    /*
    prefix and postfix
   { x++
    ++x
    هنا لا فرق
    }
    cout<<x++<<endl;
    y=x++;
    هنا تفرق
@@@@@@@@@@@@@@@@@@@@@@@@@
cout<<++x << " " <<x++; هنا هذه ليس لها تفسير

    */
}