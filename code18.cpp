#include <iostream>
using namespace std;

float max(float x, float y);     //обьявление функции

int main()
{
    float a = 5.5, b = 3.2, c = 14.1, d;
    d = max(max(a,b),c);     //1
    cout << "max = " << d << endl;
    return 0;
}

float max(float x, float y)  //определение функции 
{
    return (x > y) ? x : y;
}