#include <iostream>
using namespace std;

void f(int a, int *b, int &c);   //определение функции f
{
    a += 10;
    (*b) += 10;
    c += 10;
    cout << "f:\t" << a << "\t" << *b << "\t" << c << endl;
}

int main()
{
    int x = 10, y = 20, z = 30;
    cout << "main:\t" << x << "\t" << y << "\t" << z << endl;
    f(x, &y, z);                //вызов функции f
    cout << "main:\t" << x << "\t" << y << "\t" << z << endl;
    return 0;
}