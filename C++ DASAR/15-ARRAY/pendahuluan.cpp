#include <iostream>
#include <string>
using namespace std;

int main(){
    int data[5]; //dekarasi jumlah array
    data[0]= 6;//input nilai array dengan cara  1 per 1.
    data[1]= 7; //[] kurung siku = jumlah index array
    data[2]= 8;
    data[3]= 9;
    data[4]= 10;
    cout<< data[3] << endl;
    //atau
    string mobil[3]={"toyota","tesla","ferari"}; //input nilai array secara bersamaan
    cout <<mobil[1]<< endl;



    return 0;
}