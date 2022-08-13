#include <iostream>
using namespace std;

int main(){
	for(int i=0; i<=10; i++){
		if(i==5){
			continue; //5 di skip dan lanjut ke angka berikutnya
			//break; //break berhenti di angka 5 
		}
		cout << i << endl;
	}
	cout << "akhirnya" <<endl;
	
	
	cin.get();
	return 0;
}
