#include <iostream>
using namespace std;

int main(){
    string password = "vivaPeru", intento;
    cout<<"enter your password"<<endl;
    cin>>intento;
    while (intento != password){
        cout<<"invalid login"<<endl;
        cout<<"enter password"<<endl;
        cin>>intento;
    }
    cout<<"valid login";
    return 0;

}