#include <iostream>
using namespace std;


void function(int &y){
    y=20;
    cout << "Nilai dari y : "<<y<< endl;
    cout << "address dari y : "<<&y<< endl;
}

void kuadrat(int &valueRef){
    valueRef= valueRef*valueRef; //rumus kuadrat
}

int main(){
    int x=10;

    cout<< "nilai dari x : "<< x << endl;
    cout<< "address dari x : "<< &x<< endl;

    function(x); //nilai berubah sesuai function diatas
    cout<< "nilai dari x : "<< x << endl;

    kuadrat(x); //memanggil fungsi kuadrat
    cout<< "nilai Kuadrat dari x : "<< x << endl;

    return 0;
}