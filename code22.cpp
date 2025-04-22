#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    switch (x)
    {
        case 1: case 2: case 3: case 4:
        case 5: cout << "рабочий день"; break;
        case 6: case 7: cout << "выходной"; break;
        default: cout << "вы ошиблись";
    }
    return 0;
}