#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Masukan jumlah pola : ";
	cin >>n;
	cout << "pola 1 \n";
	
	for(int i=1; i<=n; i++){ // i turun sesuai dengan jumlah n.
		for(int j=1; j<i; j++){//nilai j adalah 1, j kurang dari i, j ++ kesamping;
			cout << " "; //spasi ke samping
		}
		for(int k=n; k>=i; k--){//nilai k sesuai dengan jumlah nilai n, k lebih dari atau sama dengan i, k berkurang kesamping
			cout << "*";//menampilkan bintang dikonsol
		}
		cout << endl; // endline
	}
	
	for(int i=1; i<=n; i++){ // i turun sesuai dengan jumlah n.
		for(int j=n; j>i; j--){//nilai j sesuai dengan nilai n, j lebih dari i, j -- kesamping; (dalam bentuk spasi)
			cout << " "; //spasi ke samping
		}
		for(int k=1; k<=i; k++){//nilai k adalah 1, k kurang dari atau sama dengan i, k bertambah kesamping
			cout << "*";//menampilkan bintang dikonsol
		}
		cout << endl; // endline
	}
	
	
	
	cin.get();
	return 0;
}
