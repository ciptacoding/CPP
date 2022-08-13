#include <iostream>
using namespace std;

int pangkatrekursif(int a, int b);

int main(){
    cout <<"===== Program Mencari Pangkat Rekursif =====\n";
    cout <<"\n";
    int x,y;
    cout<<"Masukan Angka : ";
    cin >> x;
    cout<<"Masukan Pangkat : ";
    cin>>y;
    cout<<"Hasil dari "<<x<< " Pangkat " <<y<< " = " <<pangkatrekursif(x,y)<< endl;


    return 0;
}

int pangkatrekursif(int a, int b){
    if(b==0){ //jika pangkat b= 0 maka nilainya dikembalikan menjadi 1.
        return 1;
    }else{
        return a * pangkatrekursif(a, b-1); //jika tidak, maka nilai a dikembalikan dan dikalikan dengan dirinya sendiri -1.
    }
}