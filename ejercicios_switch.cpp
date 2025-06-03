#include <iostream>
using namespace std;

int main(){
    int opcion, cm, pulgadas, metros, pies, km, millas, convercion;
    cout<< "seleccione que quiere realizar"<<endl;
    cout<<"1- convercion de cm a pulgadas"<<endl;
    cout<<"2- convercion de metros a pies"<<endl;
    cout<<"3- convercion de km a millas"<<endl;
    cin>>opcion;

    switch(opcion){
        case 1:
        cout<<"ingrese los centimetros que quiere convertir en pulgadas"<<endl;
        cin>>cm;
        convercion = cm / 2.54;
        cout<<convercion;

        break;
        case 2:
        cout<<"ingrese los metros que quiere convertir en pies"<<endl;
        cin>>metros;
        convercion= metros * 3.281;
        cout<<convercion;
        break;
    }


    return 0;
}