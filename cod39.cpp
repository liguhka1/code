#include <iostream>

using namespace std;

/* 6 a one-dimensional array is passed to the function as parameters

mas and its dimension n */

void print (int *mas, int n)

{

for (int i = 0; i < n; ++i)

cout << mas[i] << "\t";

cout << endl;

}

int main()

{

int n 3, m = 4;

int **a new int *[n];

for (int i=0; i < n; ++i)

a[i] = new int [m];

for (int i = 0; i < n; ++i)

for (int j = 0; j < m; ++j)

a[i][j] = i + j;

//обработка двумерного массива

for (int i=0; i < n; ++i)

//строка за строкой:

// в качестве аргумента функции print

//передайте указатель на i-ю строку

print(a[i], m);

for (int i = 0; i < n; ++i)

delete [] a[i];

delete [] a;

return 0;

}
