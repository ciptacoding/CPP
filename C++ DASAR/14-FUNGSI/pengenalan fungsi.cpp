#include <iostream>
#include <cmath> //mengandung fungsi matematika

using namespace std;

int main(){
	cout << "==== Program Mencari Akar Kuadrat ====" << endl;
	
	int a;
	cout << "Masukan Angka : ";
	cin >> a;
	double y = sqrt(a); //sqrt adalah sebuah library dari cmath yang berfungsi sebagai rumus akar kuadrat
	cout << "Akar Kuadrat dari " << a << " adalah "<< y;
	
	
	
	
	cin.get();
	return 0;
}
