#include <iostream>
using namespace std;

int main(){
	
	int i=0;
	while(i<=10){
		i++; //untuk continue increment diatas
		
		if(i==5){
			continue; // 5 di skip dan lanjut ke 6
			//break; berhenti di 5
		}
		//i++; //jika break increment dibawah
		cout << i << endl;
	
	}
	cout <<"akhir dari looping" << endl;
	
	cin.get();
	return 0;
}
