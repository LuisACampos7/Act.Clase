#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //crear variables
    float SALARY, NETSALARY, ISSS, AFP, DISCOUNT, RENT, TOTAL, REMAINING;
    char opcion;
    cout <<"select the discaunt you want to calculate" << endl;
    cout <<"1-ISSS"<<endl;
    cout <<"2-AFP"<<endl;
    cout <<"3-RENT"<<endl;
    cout <<"4-TOTAL"<<endl;
    cin >> opcion;
    switch (opcion)
    {
    case 1:
    //calcular el descuento por seguro social
       cout <<"introduce your gross salary";
       cin >> SALARY;
       ISSS = SALARY * 0.03;
       cout <<"your discount for ISSS is: "<< ISSS<<endl;
       
        break;

    case 2:
    //calcular el AFP
        cout <<"introduce your gross salary";
        cin >> SALARY;
        AFP = SALARY * 0.0725;
        cout <<"your discount fot AFP is: "<<AFP<<endl;

        break;

    case 3:
    //calcular las renta
        cout <<"introduce your gross salary";
        cin >> SALARY;
        AFP = SALARY * 0.0725;
        ISSS = SALARY * 0.03;
        DISCOUNT = AFP + ISSS;
        NETSALARY = SALARY - DISCOUNT;
        if (NETSALARY < 473)
        {
        cout <<"You dont apply for rent";
        }
        else if (NETSALARY > 272.99 && NETSALARY < 895.25) 
        {
        RENT = NETSALARY * 0.1;
        cout <<"Your rent dicount is: "<<RENT<<endl;
        }
        else if (NETSALARY > 895.24 && NETSALARY < 2038.11)
        {
        RENT = NETSALARY * 0.2;
        cout << "Your rent discount is: "<<RENT<<endl;
        }
        else
        {
        RENT = NETSALARY * 0.3;
        cout <<"Your rent discount is: "<<RENT<<endl;
        }
            
        break;

        case 4:
        cout <<"introduce your gross salary";
        cin >> SALARY;
        AFP = SALARY * 0.0725;
        ISSS = SALARY * 0.03;
        NETSALARY = SALARY - DISCOUNT;
        if (NETSALARY < 473)
        {
        TOTAL = AFP + ISSS;
        cout <<"your total discount is: "<<TOTAL<<endl;
        cout <<"your remaining Salary is: "<<NETSALARY<<endl;
        }
        else if (NETSALARY > 272.99 && NETSALARY < 895.25) 
        {
        RENT = NETSALARY * 0.1;
        TOTAL = RENT + AFP + ISSS;
        cout <<"Your total discount is: "<<TOTAL<<endl;
        REMAINING = SALARY - TOTAL;
        cout <<"your remaining salary is: "<<REMAINING<<endl;
        }
        else if (NETSALARY > 895.24 && NETSALARY < 2038.11)
        {
        RENT = NETSALARY * 0.2;
        TOTAL = RENT + AFP + ISSS;
        cout <<"Your total discount is: "<<TOTAL<<endl;
        REMAINING = SALARY - TOTAL;
        cout <<"your remaining salary is: "<<REMAINING<<endl;
        }
        else
        {
        RENT = NETSALARY * 0.3;
        TOTAL = RENT + AFP + ISSS;
        cout <<"Your total discount is: "<<TOTAL<<endl;
        REMAINING = SALARY - TOTAL;
        cout <<"your remaining salary is: "<<REMAINING<<endl;
        }
            
        break;

    default:
    cout <<"not valid option";
        break;
    }
    return 0; 
}
