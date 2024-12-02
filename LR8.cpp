#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include "windows.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float x, Z, dob;
    cout << "Enter x: "; cin >> x;
    dob = 1;
    for (int n = 1; n <= 5; n++) {
        dob *= log(n * x);
    }
    Z = tan(x) + (dob);
    cout << " Z = " << Z << endl;
    system("pause");
    return 0;
}