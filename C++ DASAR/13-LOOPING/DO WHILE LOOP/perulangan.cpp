#include <iostream>
using namespace std;

int main(){


cout << "pola while"<< endl;
    int a=125;
    
    while(a<=200){
        cout << a << endl;
        a+=5;   
    } 

cout <<"\n";

cout << "pola do" << endl;
int b=125;
    do{
        cout<< b << endl;
        b+=5;
    }while(b<=200);
    
    
cout<< "\n";
cout << "Program Menghitung Jumlah Bilangan" << endl;
    int m=1;
    int n;
    cout << "masukan nilai :";
    cin >> n;

    while(m<=n){
        cout << m << endl;
        m++;
    }
    cout << "\n";
    cout << "pola do"<< endl;
    int c=1;
    int d;
    cout <<"Masukan nilai : ";
    cin >> d;

    do{
        cout << c << endl;
        c++;
    }while(c<=d);



    return 0;
}