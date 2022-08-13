#include <iostream>
using namespace std;
//global scope
int x= 10; //variabel global
int ambil_global(){//mengambil variabel global
    return x;
}
int x_local(){
    int x=5;// variabel local scopenya x_local()
    return x;
}
int main(){
    cout <<"1. variabel global : "<< x << endl; //memanggil x global
    int x=20; //variabel local untuk main
    cout <<"2. variabel lokal main : "<< x << endl; //memanggil x local main
    cout <<"3.variabel ambil global : "<< ambil_global()<< endl;//memanggil fungsi ambil_global 
    cout <<"4. variabel lokal main : "<< x << endl;
    cout <<"5. variabel x_lokal : "<< x_local() << endl;//memanggil fungsi x_local
    cout <<"6. variabel lokal main : "<< x << endl;
    {
        //block scope
        cout <<"7. variabel lokal main : "<< x << endl;
        int x=2;
        cout <<"8. variabel block main : "<< x << endl;//memanggil variabel x block scope
        cout <<"9.variabel ambil global : "<< ambil_global()<< endl;
        cout <<"10. variabel block main : "<< x << endl;
    }
    cout <<"11. variabel lokal main : "<< x << endl;
    //kesimpulan : kita bisa membuat sebuah variabel yang sama akan tetapi harus menggunakan scope

cin.get();
return 0;
}