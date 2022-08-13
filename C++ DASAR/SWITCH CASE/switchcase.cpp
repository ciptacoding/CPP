#include <iostream>
using namespace std;

int main(){
	
	char aritmatika;
	int a,b;
	float hasil;
	
	cout <<" Pilih Operator Aritmatika " << endl;
	cout <<" Penjumlahan (+) \n";
	cout <<" Pengurangan (-) \n";
	cout <<" Perkalian (*) \n";
	cout <<" Pembagian (/) \n \n";
	
	cout <<" Pilih Operator +, -, *, / : ";
	cin >> aritmatika;
	
	switch(aritmatika){
	case '+':
			cout << " Masukan Angka : ";
			cin >> a;
			cout << " Masukan Angka : ";
			cin >> b;
			hasil = a+b;
			cout << "Hasil dari " << a << aritmatika << b << " = " << hasil << endl;
		break;
			
	case '-':
			cout << " Masukan Angka : ";
			cin >> a;
			cout << " Masukan Angka : ";
			cin >> b;
			hasil = a-b;
			cout << "Hasil dari " << a << aritmatika << b << " = " << hasil << endl;
		break;
			
	case '*':
			cout << " Masukan Angka : ";
	  		cin >> a;
			cout << " Masukan Angka : ";
			cin >> b;
			hasil = a*b;
			cout << " Hasil dari " << a << aritmatika << b << " = " << hasil << endl;
		break;
		
	case '/':
			cout << " Masukan Angka : ";
			cin >> a;
			cout << " Masukan Angka : ";
			cin >> b;
			hasil = a/b;
			cout << " Hasil dari " << a << aritmatika << b << " = " << hasil << endl;
		break;
		
		default :
			cout << "operator tidak ditemukan";
	}
	cin.get();
	return 0;
	
}
