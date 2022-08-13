#include <iostream>
using namespace std;

int main(){
    
    cout<<"\n\n===== Program Segitiga Sama Kaki =====\n\n";
    int n;
    cout<<"Masukan Panjang Pola : ";
    cin>> n;
    cout<<"\nPola 5\n";
    for(int i= 1; i<=n; i++){
        for(int j=n; j>i; j--){
            cout<<" ";
        }
        for(int k=1;k<=(2*i-1); k++){
            cout<< "*";
        }
        cout<< endl;
    }

    cout<<"\nPola6\n";
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        for(int j=n; j>=(2*i-n); j--){
            cout<<"*";
        }
        cout<< endl;
    }

    return 0;
}