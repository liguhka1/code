//Программа нечетное число заменяет на 0, а четное число уменьшает в 2 раза.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x;
    cout << "put the number - ";
    cin >> x; 
    (x%2 == 0)? x = x/2: x = 0;
    cout << "answer = " << x << endl;

    return 0;
}