#include <iostream>
#include <cstdlib> // mengandung fungsi random

using namespace std;
int main(){
	
	char lanjut;
	while(true){
		cout << "Lempar dadu ? (y/t) : ";
		cin >> lanjut;
		
		if(lanjut == 'y'){
			cout<< 1+(rand() %6)<< endl; //rand() merupakan fungsi random di library cstdlib
		}else if(lanjut == 't'){
			break;
		}else{
			cout << "Tolong Masukan input y atau t";
		}
	}
	
	
	cin.get();
	return 0;
}
