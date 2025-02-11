#include <iostream>
using namespace std;
int main()
{
    int number_of_subject;
    cout << "Enter number of subject: ";
    cin >> number_of_subject;
    float total = 0;
    float result;
    int full_hour = 0;
    for (size_t i = 0; i < number_of_subject; i++)
    {
        float grade;
        int hours;
        cout << "Enter the grade of the subject: ";
        cin >> grade;
        cout << "Enter the hours of the subject: ";
        cin >> hours;
        result = grade * hours;
        total = total + result;
        full_hour += hours;
    }
    float GPA = total / full_hour;
    cout << "your GPA = " << GPA;
}