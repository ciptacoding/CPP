#include <iostream>
using namespace std;

int main (){
	int a,b, op;
	float hasil;
	char arit;
	
	cout << "===== SELAMAT DATANG DI KALKULATOR C++ ===== \n \n";
	cout <<  "PILIH OPERATOR ARITMATIKA" << endl;
	cout << "1. PENJUMLAHAN" << endl;
	cout << "2. PENGURANGAN" << endl;
	cout << "3. PERKALIAN"	<<endl;
	cout << "4. PEMBAGIAN" <<endl;
	cout << " \n";
	
	cout << " masukkan angka : ";
	cin >> a;
	cout << " masukkan operator : ";
	cin >> op;
	cout << " masukkan angka : ";
	cin >> b;

	
	if (op == 1){
		hasil = a + b;
		arit = '+';
	}else if (op == 2){
		hasil = a - b;
		arit = '-';
	}else if (op == 3){
		hasil = a * b;
		arit = '*';
	}else if (op == 4){
		hasil = a / b;
		arit = '/';
	}else {
		cout << " PILIHAN YANG ANDA MASUKKAN SALAH ! " <<endl ;
	} 
	
	
	cout << " hasil penjumlahannya adalah : " << a << arit << b << " = " << hasil << endl;
	
	
	
	
	return 0;
}

