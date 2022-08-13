#include <iostream>
using namespace std;

int main(){
    //increment dan decrement
    //postincrement dan preincrement
    int a=5;
    int c=6;
    int b=7;
    int d=8;

    //postincrement
    cout << a <<endl;
    a++; //=a+1
    cout << a<< endl;
    cout << "\n";

    cout <<"beda kasus"<< endl;
    cout << c << endl;
    cout << c++ << endl;//= c, c, +1
    cout << c << endl;
    cout <<"\n";


    //preincrement
    cout << b << endl;
    ++b;
    cout << b << endl;

    cout << "beda kasus" << endl;
    cout << d<< endl;
    cout << ++d << endl;
    cout << d << endl;







    cin.get();
    return 0;
}