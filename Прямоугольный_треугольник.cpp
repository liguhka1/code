//Программа проверяет является ли треугольник прямоугольным.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter a sides A, B, C\nA - ";
    cin >> a;
    cout << "B - ";
    cin >> b;
    cout << "C(hypotenuse) - ";
    cin >> c;

    (pow(c,2) - pow(b,2) == pow(a,2) || pow(c,2) - pow(a,2) == pow(b,2))? cout << "triangle is rectangular": cout << "triangle is not rectangular ";

    return 0;
}