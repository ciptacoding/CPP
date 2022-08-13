#include <iostream>
using namespace std;

void penjumlahan(int a, int b){
    int c;
    c= a+b;
    cout <<"hasil = "<< c << endl;
}
int perkalian (int a, int b){
    return(a*b);
}

int main(){

    penjumlahan(4,5);
    int x= perkalian(3,5);
    cout <<"hasil dari x = "<< x << endl;
    return 0;
}