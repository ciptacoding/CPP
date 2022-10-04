#include <iostream>
using namespace std;

int main (){
	do{
		int N;
	cout << " masukkan nilai : ";
	cin >> N;
	
	if(N%2==0) {
		
		cout << "nilai genap" << endl;
		cout << "\n";
	}
	else {
		cout << "nilai ganjil ";
		cout << "\n";
	}
	} while (true);
}
