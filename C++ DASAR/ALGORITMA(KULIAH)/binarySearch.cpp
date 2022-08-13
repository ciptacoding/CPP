//binary searching
#include <iostream>
using namespace std;

int main(){
    //kamus
    int data[9]={1,3,5,7,8,9,11,14,16};
    int awal, tengah, akhir;
    bool ditemukan=false;
    int cari;

    cout<<"Masukan data yang akan dicari : ";
    cin >> cari;
    //algoritma
    awal=0;akhir=8;

    do{
        tengah=(awal+akhir)/2;
        if(data[tengah]== cari){
            ditemukan=true;
        }else if(data[tengah]<cari){
            awal=tengah+1;
        }else{
            akhir=tengah-1;
        }
    }while(ditemukan==false && awal <= akhir);

    if(ditemukan==true){
        cout<<"Ada"<<endl;
    }else{
        cout<<"Tidak Ditemukan"<< endl;
    }
    
    return 0;
}