#include <iostream>
using namespace std;

// encontrar si el numero es par

bool esPar(int n)
{
    return n % 2 == 0;
}

int main()
{
    int numero = 3;
    if (esPar(numero))
    {
        cout << numero << "es par";
    }
    else
    {
        cout << numero << "es impar";
    }

    return 0;
}