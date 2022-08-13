#include <iostream>
using namespace std;

//untuk function integer
int luas_persegi(int p, int l){
    int luas = p*l;
    return luas;
}

//untuk function  desimal 
double luas_persegi(double p, double l){
    double luas = p*p;
    return luas;
}

int main(){
    do{
    double a,b,hasil;
    cout<<"\n===== Program Mencari Luas Persegi Menggunakan Overloading =====\n";

    cout<<"\nMasukan Angka : ";
    cin>> a;
    cout<<"Masukan Angka : ";
    cin>>b;

    hasil=luas_persegi(a,b);
    cout<< "Luas Persegi Adalah : "<< hasil << endl;

    }while(true);


    cin.get();
    return 0;
}