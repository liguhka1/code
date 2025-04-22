//Программа решает уравнение b + sqrt(pow(b , 2) + 4 * a * c) / 2 * a - pow(a , 3) + pow(b , -2) с подставленными пользователем значениями.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{ 
    double y, a, b, c;
    
    cout << "Put a number A - ";
    cin >> a;
    cout << "Put a number B - ";
    cin >> b;
    cout << "Put a number C - ";
    cin >> c;

    y = b + sqrt(pow(b , 2) + 4 * a * c) / 2 * a - pow(a , 3) + pow(b , -2);
    
    cout << "y = " << y << endl;
    
    return 0;
}


