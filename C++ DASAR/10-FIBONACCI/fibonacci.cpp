#include <iostream>
using namespace std;
int main(){
	//f_n = F_n1 + f_n2 //rumus
	
	int n;
	int f_n;
	int f_n1;
	int f_n2;
	
	cout << "program deret fibonacci \n";
	cout <<"masukan nilai ke-n : ";
	cin >> n;
	
	f_n1= 1;
	f_n2= 0;
	f_n = f_n1 + f_n2;
	cout << f_n << " ";
	
	for( int i=1; i<=n; i++){
		f_n = f_n1 + f_n2; //rumus
		f_n2 = f_n1; //rumus
		f_n1 = f_n; //rumus
		
		cout << f_n <<" ";
		
	}
	cout << "\n";
	
	

	cin.get();
	return 0;
}
