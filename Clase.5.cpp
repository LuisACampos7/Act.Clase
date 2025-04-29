#include <iostream>

using namespace std;
int main(){
    int USD, EUR, JPY, GBP;
    char opcion;
    cout <<"ingrese a que moneda desea convertir"<< endl;
    cout <<"1 de USD a EUR"<<endl;
    cout <<"2 de USD a JPY"<<endl;
    cout <<"3 de USD a GBP"<<endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
    cout <<"ingrese la cantidad de dolares"<<endl;
    cin >> USD;
    EUR = USD * 0.88;
    cout << USD <<"Dolares es igual a "<< EUR<<"euros"<<endl;
        
        break;
    case 2:
    cout <<"ingrese la cantidad de dolares"<<endl;
    cin >> USD;
    JPY = USD * 142.09;
        break;

    case 3:
    cout <<"ingrese la cantidad de dolares"<<endl;
    cin >> USD;
        break;
    default:

        break;
    }



    return 0;

}
