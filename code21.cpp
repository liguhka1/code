#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    switch (x)
    {
        case 1: cout << "понедельник"; break;
        case 2: cout << "вторник"; break;
        case 3: cout << "среда"; break;
        case 4: cout << "четверг"; break;
        case 5: cout << "пятница"; break;
        case 6: cout << "суббота"; break;
        case 7: cout << "воскресенье"; break;
        default: cout << "Вы ошиблись";
    }
    return 0;
}