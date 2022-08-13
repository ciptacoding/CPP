#include <iostream>
using namespace std;

double luas_persegi(double p,double l){ //fungsi dengan return
    double luas = p*l; //rumus
    return luas; //kembalian
}

double keliling_persegi(double p, double l){//fungsi dengan return
    double keliling = 2*(p*l);//rumus
    return keliling;//kembalian
}

void hasil_luas(double p, double l){//fungsi tanpa kembalian
    cout << "Luasnya Adalah : ";//output
    cout << luas_persegi(p,l);//memanggil  rumus fungsi luas persegi
}
void hasil_keliling(double p, double l){//fungsi tanpa kembalian
    cout<< "Kelilingnya Adalah : ";//output
    cout<< keliling_persegi(p,l);//memanggil rumus fungsi keliling persegi
}

int main(){

    double panjang, lebar;
    cout << "Masukan panjang : ";
    cin >> panjang;
    cout << "Masukan Lebar : ";
    cin >> lebar;
    hasil_luas (panjang,lebar);//memanggil fungsi void hasil luas
    cout << "\n";
    hasil_keliling(panjang, lebar);//memanggil fungsi void hasil keliling
    




    cin.get();
    return 0;
}