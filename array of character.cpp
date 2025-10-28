#include <iostream>
using namespace std;
int main()
{
    char ch[5] = {'a', 'b', 'c', 'd', '\0'};
    char ch1[5] = "abcd";
    char ch2[5] = {'a', 'b', 'c', 'd'};
    char ch3[5] = {'a', 'b', 'c', 'd', NULL};
    char ch4[5] = {'a', 'b', 'c', 'd', 0};
    cout << ch << endl;
    cout << ch1 << endl;
    cout << ch2 << endl;
    cout << ch3 << endl;
    cout << ch4 << endl;
    char ch5[10];
    cin >> ch5; // عندما تري المسافة لا تقرأ
    cout << ch5 << endl;
    char ch6[10];
    cin.get(ch6, 10); // عندما تري \n لا تقرأ
    cout << ch6 << endl;
    char ch7[10];
    cin.get(ch7, 10, '$'); // عندما تري \n لا تقرأ
    cout << ch7 << endl;
    // لإخال متغيرين
    char ch8[10], ch9[10];
    cin.getline(ch8, 10);
    cin.getline(ch9, 10);
    cout << ch8 << "  " << ch9 << endl;
}