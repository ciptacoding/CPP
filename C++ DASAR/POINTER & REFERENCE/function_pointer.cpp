#include <iostream>
using namespace std;

void fungsi(int *b){
    cout<<"address b : "<< b << endl; //ini tidak langsung diambil alamatnya dengan & karena fungsi sifatnya general, agar ketika dipanggil bisa menyesuaikan
    cout<<"Nilai b : "<<*b<< endl; //dereference //*= fungsi pointer untuk mengambil sebuah nilai
}

void kuadrat(int *value){
    *value= (*value)*(*value);//rumus kuadrat
}

int main(){
    int a=5;
    cout << "Address a : " << &a << endl;
    cout << " Nilai a : " << a << endl; 
    fungsi(&a); //fungsi dengan input pointer

    kuadrat(&a);//fungsi input kuadrat
    cout << " Kuadrat a : " << a << endl; 

    return 0;
}