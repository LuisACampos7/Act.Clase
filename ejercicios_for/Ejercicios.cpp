#include <iostream>
using namespace std;

int main(){
    int tarifa, costo;
    cout <<"ingrese su tarifa"<<endl;
    cin>> tarifa;

    if(tarifa < 100){
        cout <<"su tarifa es baja"<<endl;
        costo= tarifa * 0.192553;
        cout <<"su factura es $"<<costo;
    } 
    else if(tarifa >= 100 && tarifa <=200){
        cout <<"su tarifa es media"<<endl;
        costo= tarifa * 0.192553;
        cout <<"su factura es $"<<costo;
    }
    else if(tarifa > 200){
        cout <<"su tarifa es alta"<<endl;
        costo= tarifa * 0.192553;
        cout <<"su factura es $"<<costo;
    }
    else{
        cout <<"ingrese un valor correcto";
    }
    return 0;
}