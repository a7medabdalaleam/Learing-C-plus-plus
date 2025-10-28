#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()
{
    char ch1[4] = "AAA";
    char ch2[4];
    strcpy(ch2, ch1);
    cout << ch2 << endl;
    char ch3[4] = "AAA";
    char ch4[4] = "HHH";
    cout << strcat(ch3, ch4) << endl;
    cout << strcmp("abcc", "abc") << endl;
    cout << strcmp("abc", "abc") << endl;
    cout << strcmp("abcc", "abcccc") << endl;
    char ch5[] = "jjjjjjjjjjjjjjjjjjjjj";
    cout << strlen(ch5) << endl;
}