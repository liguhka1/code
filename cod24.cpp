#include <iostream>

using namespace std;

int main()

{

int n, i=1;

cout << "n = ";

cin >>n;

do // выведите i на экран, а затем увеличьте

cout<< i++<< "\t"; // его значение на единицу

while (i<= n); // в то время как i меньше или равно n

return 0;

}
