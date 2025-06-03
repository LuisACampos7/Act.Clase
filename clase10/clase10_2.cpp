#include <iostream>
using namespace std;
// Pasar grados celcius a farenheit
int Temp(int a)
{
    return (a * 9 / 5) + 32;
}

int main()
{
    int celcius;
    cout << "ingrese la temperatura en celcius" << endl;
    cin >> celcius;
    cout << celcius << " grados son equivalentes a: " << Temp(celcius) << endl;

    return 0;
}