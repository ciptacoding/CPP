#include <iostream>
using namespace std;

//reporter
int perkalian(int a, int b){ //fungsi kembalian
    int c;
    c = a * b;
    return c;
}
//worker
void tampilkan( int input){ //void adalah 2 fungsi tanpa kembalian 
    cout << " Hasil Perkaliannya Adalah : ";
    cout << input << endl;
     
} 

int main(){

    cout << "===== Program Perkalian ===== \n";
    cout << "\n";
    int x,y,hasil;
    cout << " Masukan Angka : ";
    cin >> x;
    cout << " Masukan Angka : ";
    cin >> y;
    hasil = perkalian(x,y);
    tampilkan(hasil);//memanggil fungsi

    return 0;
}