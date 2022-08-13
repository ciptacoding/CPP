//algoritma selection sort
//asc dari kecil ke besar
//desc dari besar ke kecil
//selection sort, membandingkan, simpan posisi values, tukar posisi
#include <iostream>
using namespace std;

int main(){
    //kamus
    int data[5]={4,3,2,5,1};
    int pos; int tmp;

    //algoritma
    for(int i=0;i<4;i++){
        pos=i;
        for(int j=i+1; j<5;j++){
            if (data[i]> data[j]){
                pos=j;
            }
        }
        tmp=data[pos];
        data[pos]=data[i];
        data[i]=tmp;
    }
    for(int i=0; i<5; i++){
        cout << data [i]<<", ";
    }
    return 0;
}