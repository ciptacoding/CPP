#include <iostream>
using namespace std;

int main()
{

    cout << "Program Pengingat \n";
    int a;
    cout << "masukan jumlah pola : ";
    cin >> a;
    cout << endl;

    cout << " Pola 1";
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "Pola 2\n";
    for (int i = 1; i <= a; i++)
    {
        for (int j = a; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
