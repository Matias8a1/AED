#include <cassert>
#include <iostream>
//#include <iomanip>
#include <string>

using namespace std::literals;

int main()
{
    assert(2==1+1);

    //Prueba de tipo de dato bool
    assert(true);
    assert(false==false);
    assert(true!=false);
    assert(not false);
    assert(not false==true);
    assert(false or true);
    assert(true and true);
    assert(false or true and false==false);
    assert((false or true) and false==false);

    //Prueba de tipo de dato double
    assert(2.0==1.0+1.0);
    assert(0.1==1.0/10.0);
    assert(1==1.0);
    assert(2.0==1+1.0);
    assert(2==1+1.0);
    //assert(1.0 == 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
    //std::cout << std::setprecision(17) << 1.0/5.0 << '\n';

    //Prueba de strings
    assert("pacheco"s=="pa"s+"checo"s);
    assert("pacheco"s.length()==7); //length("pacheco")

         
    //Prueba de tipo de dato int: operaciones que se pueden realizar
    assert(3+4); // Suma
    assert(5-2); // Resta
    assert(2*2); // Multiplicacion
    assert(10/2);//Division
    assert(3>=0);// Mayor o igual
    assert(-1<=2);//Menor o igual



    // Prueba de tipo de dato unsigned: Es un tipo de dato que almacena numeros positivos y el 0, nunca negativos
    assert(0==0);
    assert(5==3+2);

    // Prueba de tipo de dato char
    assert('A'!='B');
    assert('A'<='B');

     

     std :: cout << "anda bien"; 

    return 0;

}
