#include <iostream>
using namespace std;

int pangkatIterasi( int a, int b){
    int hasil=a;// deklarasi
    for(int i=1; i<b; i++){//jika i kurang dari b maka dieksekusi sampai batas pangkat b
    hasil = hasil * a; //rurmus pangkat
    }
    return hasil;
}

int main (){
    cout << "=====Program Mencari Bilangan Pangkat=====\n";
    int a,b;

    cout <<"Masukan angka : ";
    cin >> a;
    cout<<"Masukan Pangkat : ";
    cin>> b;
    cout << pangkatIterasi(a,b);

    return 0;
}