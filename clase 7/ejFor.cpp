#include <iostream>
using namespace std;

int main(){
    int nota;
    char letra;

    cout <<"ingrese su nota";
    cin >> nota;
    if(nota <= 100 && nota>=90){
        letra = 'a' ;
    }
    else if(nota >= 85){
        letra = 'b' ;
    }
    else if(nota >= 80){
        letra = 'c' ;
    }
    else if(nota >= 70){
        letra = 'd' ;
    }
    else if(nota >= 69){
        letra = 'e' ;
    }
    else if(nota < 69){
        letra = 'f' ;
    }
    else{
        cout <<"introduce un numero valido";
    }
    switch (letra)
    {
    case 'a' :
        cout <<"su nota es A, Mantenga ese excelente esfuerzo" ;  
    break;
    case ' b' :
        cout <<"su nota es b, Manten ese esfuerzo";
    break;
    case 'c' :
        cout <<"su nota es c, felicidades siga esforzandose";
    break;
    case 'd' :
        cout <<"su nota es d, fuerza bro";
    break;
    case 'e' :
    cout <<"su nota es e, esfuerzate mas";
    break;
    default:
    cout <<"su nota es f, estudie";
        break;
    }
}