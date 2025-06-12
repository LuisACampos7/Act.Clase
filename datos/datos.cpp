#include <iostream>
#include <string>
using namespace std;

int main(){
    int x;
    cout << "ingrese un numero";
    cin>>x;

    string str = to_string(x);
    string invertido = "";

    for(int i = str.length() - 1; i >= 0; i--){
        invertido += str[i];
    }
    cout << "numero invertido: " << invertido << endl;
    return 0;
}