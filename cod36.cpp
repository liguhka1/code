#include <iostream>

using namespace std;

/* the static array ta and its dimensions are passed to the function as parameters: n is the number of rows,

m number of columns*/

void print (int mas [3] [2], int n, int m)

{

for (int i=0; i < n; ++i, cout << endl)

for (int j = 0; j < m; ++j)

cout << mas[i][j] << "\t";

} int main()

{

int a[3][2] = {{1, 2}, {-3, 4}, {-5,6} };

print(a, 3, 2);

cout << endl;

print (a, 2, 2)

return 0;

}
