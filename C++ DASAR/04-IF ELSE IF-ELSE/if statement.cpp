#include <iostream>
using namespace std ;

int main () {
	int a; // deklarasi
	
	cout << "masukkan angka : "; // menampilkan di konsol
	cin >> a; // input user dengan nilai integer
	
	if (a >= 6)// a lebih dari sama dengan 6 //jika kondisi () benar/true, maka statement didalam {} akan di eksekusi.
	{
		cout << " selamat anda mendapatkan hadiah \n"; //tampilan jika kondisi benar
	}
	else {
		cout << "nilai kurang \n";
	}
	cout << "selesai"; //jika kondisi salah maka program langsung mengeksekusi "selesai".
	
	
	return 0;
}
