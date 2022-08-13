#include <iostream>
using namespace std;

int main(){
    //kamus
    int data[10]={14,16,23,23,78,24,23,9,21,54};
    int cari;
    int jml=0;
    int posisi[10];

    cout<< "Masukan data yang dicari : ";
    cin >> cari;
    //algoritma
    for(int i=0; i<10; i++){
        if(data[i]==cari){
            posisi[jml]=i;
            jml++;
        }
    }
    if(jml>0){
        cout<<"Ada jumlahnya "<<jml<< endl;
        cout<<"Pada index ke ";
        for(int i=0; i<jml; i++){
            cout<<posisi[i]<<" ";
        }
    }else{
            cout << "data yang di cari tidak ada";
    }

    return 0;
}
