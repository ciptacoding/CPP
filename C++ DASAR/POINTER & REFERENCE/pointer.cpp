#include <iostream>
using namespace std;

int main(){

    //variabel
    int a=5;//int a mempunyai nilai dan address (alamat)
    
    //pointer
    int *aPtr = &a;//deklarasi address yang sama menggunakan pointer variable
    
    cout<< "Nilai dari a : "<<a<< endl;
    cout<<"Address dari a : "<< &a <<endl;
    cout<<"address dari a : "<< aPtr<< endl; //memanggil dengan deklarasi

    //dereference = mengambil data dari sebuah pointer
    a=10; 
    cout << "Mengambil nilai dari aPtr : "<< *aPtr << endl;
    return 0;
}