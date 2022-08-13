#include <iostream>
using namespace std;

int main (){
	int x = 5; //deklarasi variabel
	while(x<=50)//syarat
	{ 
		cout << "benar"; //aksi 	
	//jika syarat benar maka aksi akan dieksekusi
		cout << x << endl;
		x +=10; // x akan terus ditambah 10 hingga mencapai batas max syarat

	}
	
	cout  <<  "selesai"<< endl;
	
	return 0;
}
