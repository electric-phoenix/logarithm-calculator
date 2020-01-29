#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int base;
float ans, num;
int main()
{
    cout << "Log calculator\n";
    cout << "Enter anti-logarithm\n";
    cin >> num;
    cout << "Base 10 or e? (1=10, 2=e)\n";
    cin >> base;
    if (base == 1)
    {
        cout << log10(num) << "\n";
    }
    else if (base == 2)
    {
        cout << log(num) << "\n";
    }
    else
    {
        cout << "Something went wrong, run me again\n";
    }

}
