#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Masukan Panjang Pola : ";
    cin >> a;
    cout<<"Pola 1"<< endl;

    for(int i=1; i<=a; i++){ // i=1,
        for(int j=a; j>i; j--){// j= a merupakan masukan user
            cout<< " ";// menghasilkan spasi
        }
        for(int k=1; k<=i; k++){//menghasilkan deret bintang
            cout<< "*";
        }
        cout << endl;
    }
    cout <<"Pola 2"<< endl;

    for(int i=1; i<=a; i++){ //i=1
        for(int j=1; j<i;j++){ //j merupakan variable yang akan menghasilkan spasi 
            cout<< " ";//spasi
        }
        for(int k=a; k>=i; k--){ //k=a merupakan inputan dari user
            cout<<"*";
        }
        cout<< endl;
    }


    return 0;
}