#include <iostream>
using namespace std;

int main (){
	
	cout << "awal dari loop 1 \n";
	for(int i=2; i<=10; i++  )//kondisi= inisialisasi, loop kondisi, increment
	{
		cout<< i << endl;
	}
	cout << "selesai" << endl;
	
	
	cout << "\n awal dari loop 2 \n";
	for(int i=1; i<=10; i+=2  )//kondisi= inisialisasi, loop kondisi, increment
	{
		cout<< i << endl;
	}
	cout << "selesai" << endl;
	
	
	cout << "\n awal dari loop 3 \n";
	for(int i=0; i>=-10; i--  )//kondisi= inisialisasi, loop kondisi, increment
	{
		cout<< i << endl;
	}
	cout << "selesai" << endl;
	
	cout << "\n awal dari loop 4 \n";
	int total = 0; //yang akan dijumlahkan
	for(int i= 1; i<=10; total +=i, i++)//kondisi= inisialisasi, loop kondisi, increment
	{
		cout<< i << " || " << total << endl;
	}
	cout << "selesai" << endl;
	
	return 0;
}
