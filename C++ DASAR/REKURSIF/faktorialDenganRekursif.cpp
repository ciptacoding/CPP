#include <iostream>
using namespace std;

int long faktorial(int a);

int main(){
    int x;

    cout<< "===== Program Mencari Nilai Faktorial Menggunakan Rekursif =====\n";
    cout<<"\nMasukan Nilai : ";
    cin>> x;
    cout<<"Hasil dari faktorial " << x << " != "<< faktorial(x)<< endl;

    return 0;
}

long int faktorial(int a){
    if(a==1){//jika a==1 maka nilainya akan dikembalikan ke a
        return a;
    }else { //selain dari itu maka a akan dikalikan dengan fungsi faktorial. dengan rumus tersebut
        return ( a * faktorial( a - 1));
    }
}