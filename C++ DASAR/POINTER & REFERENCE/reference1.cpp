#include <iostream>
using namespace std;

int main(){
    int x;
    cout <<"\n\n====Reference====\n";
    cout <<"Masukan nilai x: ";
    cin >>x;

    cout<<"\nNilai dari x adalah : "<< x << endl;
    cout<<"address dari x adalah : "<< &x << endl;

    int &y=x; //reference
    y=100;
    cout <<"\nNilai dari x : "<< x << endl;
    cout <<"nilai dari y : "<< y << endl;

    x=200;
    cout<< "\nNilai dari x : "<< x << endl;
    cout<< "Nilai dari y : "<< y << endl;

    return 0;
}