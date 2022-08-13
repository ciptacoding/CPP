#include <iostream>
using namespace std;

int main(){
    int x;

    cout<<"\n====Program Pointer====\n";
    cout<<"\nMasukan Sebuah Nilai X : ";
    cin >>x;

    cout<<"Nilai dari X adalah : "<< x << endl;
    cout<<"Alamat dari X adalah : "<< &x << endl;

    
    int *xPtr=&x; //adressing yang sama
    x=100; //mengubah nilai
    cout <<"\nNilai X setelah di deference : "<< x << endl;
    cout<<"Alamat dari X setelah di deference : "<< xPtr << endl;
    return 0;
}