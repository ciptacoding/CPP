#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Masukan Panjang Pola : ";
    cin >> a;
    cout << "Pola 1" << endl;
    for(int i = 1; i <= a; i++){
        for(int j= 1; j<=i; j++){
            cout << "*";
        }
        cout << endl; //posisinya harus disini
    }
    cout<< "Pola 2" << endl;
    for(int i = 1; i<= a; i++){
        for (int j= a; j>=i; j--){
            cout << "*";
        }
        cout<< endl;//ingat
    }
    

    return 0;
}