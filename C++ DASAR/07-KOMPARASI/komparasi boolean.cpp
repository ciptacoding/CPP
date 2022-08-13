#include <iostream>
using namespace std ;

int main () {
	int a = 2; //deklarasi
	int b = 3; //deklarasi
	bool  hasil1, hasil2; //deklarasi
	
	hasil1 = (a<b); //pernyataan KURANG DARI harus didalam kurung
	cout << hasil1 << endl; // pemanggilan
	
	hasil2 = (a>b); //  lebih dari
	cout <<hasil2<<  endl;
	
	hasil1 = (a==b); // sama dengan
	cout << hasil1 << endl;
	
	hasil2 = (a!=b); // tidak sama dengan
	cout << hasil2<< endl;
	
	hasil1 = (a<=b) ; //kurang dari atau sama dengan
	cout << hasil1 << endl;
	
	hasil1 = (a>=b);
	cout << hasil1 << endl;
	
	return 0;
}
