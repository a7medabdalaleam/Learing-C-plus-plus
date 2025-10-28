#include <iostream>
using namespace std;
// function for calculation the average
double avg(int m1, int m2, int m3)
{
    return double(m1 + m2 + m3) / 3;
}
// function for determining the max
int max(int n1, int n2, int n3);
int main()
{
    int mm1, mm2, mm3;
    cout << "Enter your marks :" << endl;
    cin >> mm1 >> mm2 >> mm3;
    cout << "Max is  = " << max(mm1, mm2, mm3) << endl;
}
int max(int n1, int n2, int n3)
{
    int mx = n1;
    if (mx < n2)
        mx = n2;
    if (mx < n3)
        mx = n3;
    return mx;
}