#include <iostream>
using namespace std ;

int main (){
	int a,b; //deklarasi
	int hasil;
	
	cout << "==== SELAMAT DATANG DI KALKULATOR PENJUMLAHAN ==== \n";
	cout << " " <<endl;
	cout << "Masukkan angka pertama : ";
	cin >> a; //input nilai
	cout << "Masukkan angka kedua : ";
	cin >> b; // Input nilai
	hasil = a+b; // rumus penjumlahan
	cout << "hasil penjumlahan dari " << a << " + "<< b << " adalah " << hasil << endl;
	
	if (hasil %2==0) { //kondisi jika bilangan genap maka body if akan di eksekusi.
		cout << hasil << " adalah bilangan genap "<< endl;
		
	} else {
		cout << hasil << " adalah bilangan ganjil " << endl;
	}
	
	
	return 0;
}
