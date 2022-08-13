#include <iostream>
using namespace std;

void tambahan(int *b){
    cout <<"nilai dari b : "<< *b << endl;
    cout <<"alamat dari b : "<< b << endl;
}

void kuadrat(int *valuePtr){
    *valuePtr=(*valuePtr)*(*valuePtr);
}

int main(){
    cout<<"\n\n====Fungsi Pointer====\n";

    int a;
    cout<< "Masukan Nilai A : ";
    cin >> a;
    cout <<"Nilai dari a : "<< a << endl;
    cout << "Alamat dari a : "<< &a << endl;
    tambahan(&a);

    kuadrat(&a);
    cout << "kuadrat dari a :"<<a<< endl;

    return 0;
}