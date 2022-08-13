#include <iostream>
using namespace std ;

int main () {
	int a = 2;
	int b = 3;
	int hasil;
	
	// operator NOT
	cout << "untuk operator not \n";
	hasil = !(a==2); //walaupun nilai di dalam kurungnya benaar, jika ditambahkan tanda seru di depannya maka menjadi false /0.
	cout << hasil << endl;
	
	cout << "untuk operator and \n"; // AND = kedua nilai harus benar untuk  menghasilkan nilai TRUE.
	
	hasil = (a==2) and (b==3); // true and true = true
	cout << hasil << endl;
	hasil = (a==3) && (b==3); //false and true = false
	cout << hasil<< endl;
	hasil = (a==2) && (b==4); //true and false = false
	cout << hasil << endl;
	hasil = (a== 3) and (b==5); //false and false = false
	cout << hasil << endl;
	
	cout << "untuk operator or \n"; // OR = jika salah satu nilai benar maka hasilnya TRUE.
	
	hasil = (a==2) or (b==3); // true and true = true
	cout << hasil << endl;
	hasil = (a==3) || (b==3); //false and true = true
	cout << hasil<< endl;
	hasil = (a==2) || (b==4); //true and false = true
	cout << hasil << endl;
	hasil = (a== 3) or (b==5); //false and false = false
	cout << hasil << endl;
	
	
	return 0;
}
