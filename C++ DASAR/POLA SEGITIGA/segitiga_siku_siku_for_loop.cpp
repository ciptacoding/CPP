#include <iostream>
using namespace std;

int main (){
	
	int n;
	cout << "masukan jumlah pola : ";
	cin >> n;
	
	cout << "pola 1\n";
	
	for(int i=1; i<=n; i++){ //i bernilai 1, i kurang dari atau sama dengan nilai n yang diinput user, i++ kebawah +1+1+1 dst sesuai dengan n;
		for (int j=1; j<=i; j++){//j bernilai 1, j kurang dari atau sama dengan i, j+1+1+1+1+1 dst sesuai n;
		cout << "*"; //objek output
		}
		cout << endl;
	}
	
	
	cout << "pola 2\n";
	for(int i=1; i<=n; i++){//i bernilai 1, i kurang dari atau sama dengan nilai n yang diinput user, i++ kebawah +1+1+1 dst sesuai dengan n;
		for(int h=n; h>=i; h--){ //h sama dengan n karena jumah n akan dikurangi 1 per 1 oleh h-1-1-1 dst. h lebih dari atau sama dengan i(1), lalu dikurangi 1 per 1 h--
		cout <<"*";
		}
		cout << endl;
	}
	
	
	
	cin.get();
	return 0;
}
