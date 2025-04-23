include <iostream>

using namespace std;

int main()

{

int a[30];

int n; cout << "n = ";

cin >> n;

for (int i 0; i < n; ++i)

{

}

cout << "a[" << i << "] = ";

cin >> a[i];

//мы предполагаем, что нулевой элемент массива является наименьшим значением

int min a[0];

// соответственно, его порядковый номер равен o

int nmin = 0;

/ we iterate over all elements of the array from the first to the last

/

for (int i=1; i < n; ++1)

// если следующий элемент меньше значения типа, то

if (a[i] < min)

{

// мы сохраняем как новое наименьшее значение

// значение текущего элемента массива и,

// соответственно, мы запоминаем его номер

min a[i];

nmin = i;

}

cout << "min" << min << "\t nmin = << nmin << endl;

return 0;

}
