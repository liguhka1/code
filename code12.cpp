#include <iostream>

using namespace std;

int main()
{
    int x, y, max;
    cin >> x >> y;
    cout << (x > y ? x : y) << endl; // 1
    max = x > y ? x : y;
    cout << max << endl;
    return 0;
}