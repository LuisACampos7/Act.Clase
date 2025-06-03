#include <iostream>
using namespace std;

// sumar dos numeros

int suma(int a, int b)
{
    return a + b;
}

int main()
{
    int num1 = 5, num2 = 7;
    cout << "la suma es " << suma(num1, num2) << endl;

    return 0;
}