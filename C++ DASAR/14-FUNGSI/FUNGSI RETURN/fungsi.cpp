#include <iostream>
using namespace std;

int kuadrat (int x){ //fungsi= digunakan agar tidak membuat sebuah fungsi yang berulang-ulang. dan bisa di panggil kapan saja.
	int y;
	y = x*x;
	return y;
}

double bagi (double a, double b){
	double c;
	c= a/b;
	return c;
}

int main(){
	
	cout << "===== Program Mencari Kuadrat Menggunakan Fungsi =====" << endl;
	
	int n,hasil;
	cout << "Masukan angka : ";
	cin >> n;
	hasil= kuadrat(n);// memanggil fungsi.
	cout <<"Nilai kuadrat dari "<< n <<" adalah " << hasil << endl;
	cout << "\n";
	
	cout << "===== Program Pembagian Menggunakan Fungsi =====" << endl;
	
	int a,b;
	double hasil2;
	cout << "Masukan angka : ";
	cin >> a;
	cout << "Masukan angka : ";
	cin >>b;
	hasil2 = bagi(a,b);
	cout <<"Hasil dari " << a << " dibagi " << b<<  " adalah " <<hasil2;
	
	
	
	
	
	cin.get();
	return 0;
}
