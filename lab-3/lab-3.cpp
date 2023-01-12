#include <iostream>  
using namespace std;
void main()
{

    int a;
    setlocale(LC_ALL, "Ukr");
    cout << "Enter 1, 2 or 3: ";
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "You entered 1"; break;
    case 2:
        cout << "You entered 2"; break;
    case 3:
        cout << "You entered 3"; break;
    default:
        cout << "You did not enter 1, 2 or 3"; break;
    }
}