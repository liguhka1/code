#include <iostream>

using namespace std;

/* the dynamic array mas and its dimensions are passed to the function as parameters: n is the number of rows, m is the number of columns*/

void print (int **mas, int n, int m)

{

for (int i=0; i < n; ++i, cout << endl)

for (int j = 0; j < m; ++j)

cout << mas[i][j] << "\t";

}

int main()

{

int n 3, m = 4;

int **a new int *[n];

for (int i = 0; i < n; ++i)

a[i] = new int [m];

for (int i=0; i<n; ++i)

for (int j = 0; j < m; ++j)

a[i][j] = 1+j;

print(a, 3, 4);

// освобождение памяти

for (int i=0;i < n; ++i)

delete [] a[i];

delete [] a;

return 0;

}
