#include <iostream>
using namespace std;

int main(){
	
	int a = 10; //deklarasi variabel
	
	do{ //aksi
		cout << " hore "; //aksi minimal dieksekusi 1 kali
		cout << a << endl;
		a++;
	}while (a < 100); //syarat, jika true maka akan dieksekusi
	//dieksekusi sesuai jumlah syarat.
	
	return 0;
}
