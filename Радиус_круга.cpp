//Программа находит радиус окружности, длина которой равна l.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double l, r;
    cout << "Enter the length of the circle - ";
    cin >> l;

    cout << "The radius in - " << l/2*M_PI << endl;
    
    return 0;
}