#include <iostream>
using namespace std;

//protorype
int faktorial(int a);//fungsi prototype

int main(){
    int nilai, hasil;
    cout << "===== Program Mencari Faktorial Menggunakan Rekursif =====\n";
    cout << "Masukan Bilangan Faktorial : ";
    cin >> nilai;
    hasil = faktorial(nilai);
    cout << "\nHasil dari faktorial "<<nilai<< " = "<<hasil;

    return 0;
}

int faktorial(int a){
    if(a<=1){//jika a kurang atau sama dengan 1, maka nilainya akan dikembalikan ke a.
        cout<<a; //fungsi agar memperlihatkan bilangan yang dikalikan. 
        return a;
    }else{
        cout<<a<<"*";//memperliihatkan setiap perkalian bilangan faktorial.
        return a * faktorial(a-1);//rumus faktorial
    }
}