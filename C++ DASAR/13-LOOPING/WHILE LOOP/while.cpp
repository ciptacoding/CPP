#include <iostream>
using namespace std;

int main(){
	
	int a= 5;
	while(a<=10)//syarat //bolean true or false
	{ //aksi
	cout << "benar ";
	cout << a << endl; //mencetak dan memanipulasi nilai A
	a +=2 ; //increment // ditambah hingga melebihi 10 maka looping stop	
	}
	cout << "selesai"<< endl;
	
	return 0;
}
