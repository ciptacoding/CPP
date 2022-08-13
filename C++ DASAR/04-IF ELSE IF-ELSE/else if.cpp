#include <iostream>
using namespace std;

int main(){

	int a;
	
	cout << "masukkan angka : ";
	cin >> a;
	
	if (a<=10){ //jika angka a kurang dari 10 atau sama dengan 10 maka akan dieksekusi
		cout<< " angka ini merupakan angka satuan "<< endl;
	} else if (a<=20){ //jika angka a kurang dari 20 atau sama dengan 20 maka akan dieksekusi
		cout << " angka ini merupakan angka Belasan " << endl;
	} else if (a<=99){ //jika angka a kurang dari 99 atau sama dengan 99 maka akan dieksekusi
	 	cout << " angka ini merupakan angka puluhan " << endl;
		}else { // jika tidak ada satupun angka yang masuk kategori diatas maka else akan dieksekusi
			cout << " angka ini bukan merupakan satuan, belasan, dan puluhan ";
		}
	
	
	
	return 0;
}
