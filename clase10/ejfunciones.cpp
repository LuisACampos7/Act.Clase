#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int numaleatorio(){
    srand(time(nullptr));
    return rand() % 10 + 1;
}

int main(){
    int guess ;
    cout <<"ingrese un numero entre 1 y 10"<<endl;
    cin >> guess;
    if (guess == numaleatorio){

    }


    return 0;
}