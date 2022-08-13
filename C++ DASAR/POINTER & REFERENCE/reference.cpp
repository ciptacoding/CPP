#include <iostream>
using namespace std;

int main(){
    
    //variabel
    int a = 5;

    cout << "address dari a : "<< &a << endl;
    cout << "Nilai dari a : "<< a << endl<< endl;

    //&=reference
    int &b = a;

    cout << "Nilai dari b : " << b << endl;
    cout << "address dari b : "<< &b << endl<< endl;

    b=10; // merubah nilai
    cout << "Nilai dari a : "<< a << endl;
    cout << "Nilai dari b : "<< b << endl<< endl;

    a=20; // merubah nilai
    cout << "Nilai dari a : "<< a << endl;
    cout << "Nilai dari b : "<< b << endl;


    return 0;
}