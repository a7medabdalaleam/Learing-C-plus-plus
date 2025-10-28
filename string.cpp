#include <iostream>
#include <string>
using namespace std;
int main()
{
    string x = "Ahmedgdfsgf", z;
    string y = x;
    y.assign(x);
    getline(cin, z);
    cout << " String X is ==> " << x << endl;
    cout << " String Y is ==> " << y << endl;
    cout << " String Z is ==> " << z << endl;
    cout << "The First Index in X is " << x.at(0) << endl;
    cout << "The Size Of String X is " << x.size() << endl;
    cout << "Sub of String X from index[1] to index[3] is " << x.substr(1, 3) << endl;
    cout << "Sub of String X from index[2] to End is " << x.substr(2) << endl;
    cout << "String X After Swap with Y " << endl;
    x.swap(z);
    cout << " String X is ==> " << x << endl;
    cout << " String Z is ==> " << z << endl;
    cout << "To fine Element in String X ==> " << x.find('A') << endl;
    cout << "Remove The First Three Index Form X " << x.erase(0, 3) << endl;
    cout << "Bring The First Three Index Form X " << x.erase(3) << endl;
    string a = "Ahmed Mostafa";
    cout << "Replace (Mostafa) with (Ali) in String A is " << a.replace(6, 7, "Ali") << endl;
    string b = "Ahmed Mostafa";
    b.insert(6, "Ali ");
    cout << "Insert word Ali in String B is " << b << endl;
}