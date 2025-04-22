#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int x;
    double y;
    cin >> x;
    y = (pow(x, 2) + sin(x + 1))/25;    //1
    cout << "y = " << setprecision(5) << y << endl;
    return 0;
}