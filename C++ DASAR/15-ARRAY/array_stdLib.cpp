#include <iostream>
#include <array>
using namespace std;

int main(){
    //membuat array dengan standart library
    //syntax untuk standart library:
    // array<int , jumlah array> nama array;
    array<int , 5> data;
    for(int i=0; i<=4; i++){ //perulangan for
        data[i]=i; //jumlah index array = i
        cout <<"data ["<<i<<"] = "<< data[i];
        cout <<" address : " << &data[i] << endl;
    }
    cout << endl;
     //ukuran array
    cout << "Ukuran data : "<< data.size() << endl;
     // address awal dari array
    cout << "Address awal : "<< data.begin() << endl;
    //address akhir dari array
    cout << "address akhir : "<< data.end() << endl;
    //mengambil nilai dengan index
    cout << "Nilai ke 2 : "<< data.at(2)<< endl;


    return 0;
}