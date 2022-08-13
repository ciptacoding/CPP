#include <iostream>
using namespace std;

//fungsi protorype
double rumus_kubus(double p=1, double l=1, double t=1);//fungsi = 1 untuk mengantisipasi jika user tidak memasukan tiga bilangan.

int main(){

cout << "Hasilnya Adalah : " << rumus_kubus(2,3,4) << endl;// memasukan 3 bilangan
cout << "Volume Kubus Adalah : " << rumus_kubus(2,3) << endl;// meamsukkan 2 bilangan
cout << "Volume Kubus Adalah : "<<rumus_kubus(2)<< endl;//memasukan 1 bilangan
cout << "Volume Kubus Adalah :"<<rumus_kubus()<< endl;// memasukan 0 bilangan


cin.get();
return 0;
}
double rumus_kubus(double p, double l, double t){
    return p*l*t;
}
