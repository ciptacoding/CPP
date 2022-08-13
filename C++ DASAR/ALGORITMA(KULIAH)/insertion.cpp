
//Algoritma insertion
#include <iostream>
using namespace std;
int main(){
//kamus
    int data[5]={5,3,4,1,2};
    int tmp;int j;
        for(int i=0;i<4;i++){
            if(data[i] > data[i+1]){
                tmp=data[i];
                data[i]=data[i+1];
                data[i+1]=tmp;
                j=i;

            while(data[j] < data[j-1] && j >= 0){
                tmp=data[j];
                data[j]=data[j-1];
                data[j-1]=tmp;
                j--;
            }
        }
    }
        for(int i=0;i<5;i++){
        cout<<data[i]<<", ";
    }
    return 0;
}


