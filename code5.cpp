#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "1." << setw(10) << "Ivanov" << endl; 
    cout << "2." << setw(10) << left << "Ivanov" << endl;

    cout << "3." << setw(10) << right << "Ivanov" << endl;
    return 0;
}