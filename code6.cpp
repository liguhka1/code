#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "1." << setw(10) << -23.4567 << endl; 
    cout << "2." << setw(10) << setprecision(3) << -23.4567 << endl;
    cout << "3." << setw(10) << internal << -23.4567 << endl;
    
    return 0;
}