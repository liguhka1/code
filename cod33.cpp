#include <iostream>

using namespace std;

int main()

{

int a = 50; // целочисленная переменная a

int &b= a; // ссылка на альтернативное имя переменной a

cout << "a\t b\n";

cout << a << "\t" << b << endl;

a++; // 1

cout << a << "\t" << b << endl;

b++; // 2

cout << a << "\t" << b << endl;

return 0;

}
