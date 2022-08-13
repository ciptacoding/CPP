#include <iostream>
using namespace std;


int pangkatRekursif(int a, int b){
    if(b<=1){
        cout << "akhir dari rekursif"<< endl;
        return a;
    }else{
        cout<< "rekursif"<< endl; //menampilkan jumlah setiap pangkat yang dikalikan
        return a*pangkatRekursif(a,(b-1));//rumus pangkat rekursif
    }
}


int main(){
    int a,b;
    cout << "Masukan angka : ";
    cin >> a;
    cout <<"Masukan pangkat : ";
    cin>> b;
    cout << "Hasil dari rekursif : \n"<<pangkatRekursif(a,b)<< endl;
    return 0;
}