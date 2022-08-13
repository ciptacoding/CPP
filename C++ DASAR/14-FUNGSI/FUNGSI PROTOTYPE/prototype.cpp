#include <iostream>
using namespace std;

//prototype = deklarasi function agar fuction dibawah dapat dipanggil
double hitung_luas(double p, double l);

void println(double x);

int main(){

    cout << " Program Menghitung Persegi Menggunakan Fungsi Prototype "<< endl;
    double panjang,lebar,luas;
    cout << "Masukan panjang : ";
    cin >> panjang;
    cout << "Masukan Lebar : ";
    cin >> lebar;
    luas = hitung_luas(panjang,lebar);//deklarasi luas sama dengan pemanggilan function hitung_luas
    println(luas);

    cin.get();
    return 0;
}
//function
double hitung_luas(double p, double l){
    return p*l;
}
//function 
void println(double x){//double x itu adalah variabel yang akan diisi jika fungsi sudah dipanggil
    cout << "luas persegi adalah "<< x << endl;
}