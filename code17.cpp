#include <iostream>

using namespace std;

int sum(int x, int y)     //определение функции
{
    return x + y;
}

int main()      //главная функция
{
    int a  = 5, b = 3, c;
    c = sum(a,b);                            //1
    cout << "sum = " << c << endl;
    cout << "sum = " << sum(a,b) << endl;   //2
    return 0;
}