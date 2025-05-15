#include <iostream>
using namespace std;
int main(){
    int numeros[5];
    cout <<"ingrese 5 numeros"<<endl;
    for(int i = 0; i<5; i++){
        cout <<"numero "<<i+1<< ": ";
        cin>> numeros[i];
    }
    cout<<"numeros ingresados "<<endl;
    for(int i = 0; i < 5;i++){
        cout<<"numeros ingresados "<<i+1<<" : "<<numeros[i]<<endl;
    }
    return 0;
    }

    