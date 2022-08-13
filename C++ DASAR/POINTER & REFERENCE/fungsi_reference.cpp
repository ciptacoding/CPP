#include <iostream>
using namespace std;

void tambahRef(int &); //prototype
void kuadrat(int &);//prototype

int main(){
    int a=5;
    cout<< "\nNilai dari a : "<< a<< endl;
    cout<< "address dari a : "<< &a << endl;

    tambahRef(a);
    cout<<"\nnilai dari a : "<< a << endl;

    kuadrat(a);
    cout<< "\nNilai kuadrat dari a : "<< a << endl; 

    return 0;
}

void tambahRef(int &b){ //function reference
    b=50;
    cout <<"\nnilai dari b : "<< b<< endl;
    cout <<"address dari b : "<<&b<< endl;
}

void kuadrat(int &nilai){//function reference
    nilai=nilai*nilai;
}