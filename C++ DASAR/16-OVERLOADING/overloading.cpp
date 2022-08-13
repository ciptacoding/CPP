#include <iostream>
using namespace std;
//overloading = menimpa

//basic function
int luas_kotak(int panjang, int lebar){
    int luas = panjang*lebar;
    return luas;
}
//overloading function
int luas_kotak(int sisi){ //untuk 1 argumen yang sama
    int luas = sisi*sisi;
    return luas;
}
//overloading function pecahan
double luas_kotak(double p){
    double luas = p*p;
    return luas;
}

//catatan : nama fungsi harus sama dan variable nya boleh bebas.


int main(){

    cout<<"luas kotak 2x3 : "<< luas_kotak(2,3)<< endl;
    cout<<"luas kotak 2x2 : "<<luas_kotak(2)<< endl;
    cout<<"luas kotak 2.5 x 2.5 : "<<luas_kotak(2.5)<< endl;









    cin.get();
    return 0;
}