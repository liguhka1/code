#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Введите x";
    cin >> x;
    (x % 2 == 0)? cout << "Чисто четное\n": cout << "число нечетное\n";
    return 0;     
}