#include <iostream>
#include <string>
using namespace std;
struct car
{
    string name;
    string color;
    int maxspeed;
    int model;
    void fun(car v)
    {
        cout << "The Name of the Car: ";
        cout << v.name << endl;
    }
};
car print(car &f)
{
    cout << "Enter The name: " << endl;
    cin >> f.name;
    cout << "Name is " << f.name << endl;
    cout << "Enter The Color: " << endl;
    cin >> f.color;
    cout
        << "Color is " << f.color << endl;
    cout << "Enter The Max Speed: " << endl;
    cin >> f.maxspeed;
    cout << "Max speed is " << f.maxspeed << endl;
    cout << "Enter The Model: " << endl;
    cin >> f.model;
    cout << "Model is " << f.model << endl;
    return f;
}
int main()
{
    car x;
    print(x);
    x.fun(x);
    car *h;
    h = &x;
    cout << "Name of The Pointer : ";
    cout << h->name << endl;
}