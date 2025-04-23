int **b new int *[4]; //

declared a two-dimensional dynamic array

for (int i=0; i < 2; ++i) b[i] = new int [5];

// entering array elements

for (int i=0; i < 4; ++1)

for (int j=0; j < 5; ++j)

{

cout << "b[" << i << "][" << j << "] = ";

cin >> *(*(b+i)+j); // запишите введенное значение в b[i][j]

}

for (int i=0; i < 4; ++i, cout << endl) // элементы выходного массива

for (int j = 0; j < 5; ++j)

// отобразить значение параметра b[i][j]

cout << "b[" << i << "][" << j << "] = " << *(*(b+i)+j) << "\t";
