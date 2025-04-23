#include <iostream>

using namespace std;

int main()

{

int a[50];

int n, k=0;

cout << "n = ";

cin >> n;

float s = 0;

for (int i=0; i < n; ++i)

{

cout << "a[" << i << "] = ";

cin >> a[i];

if (!(a[i]%2)) // если остаток при делении элемента на 2 равен {

s += a[i]; /

/ then the element is even add it to the sum

++k;

// и увеличьте количество четных элементов на 1

}

}

// если k не равно нулю, то в последовательности есть четные числа

// и вы можете вычислить их среднее арифметическое

if (k)

cout << "sr = << s/k << endl;

else cout <<

there are no even numbers in the sequence << endl;

}

return 0;
