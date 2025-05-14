#include <iostream>

#include "Cuenta.h"
#include "Persona.h"
using namespace std;

int main(){
    Cuenta *punteroCuenta = NULL;

    Cuenta cuenta = Cuenta("111", 400);

    punteroCuenta = &cuenta;

    Persona el = Persona("123", "Alvaro", punteroCuenta);
    Persona ella = Persona("234", "Alicia", punteroCuenta);


    punteroCuenta->consignar(100);

    punteroCuenta->retirar(200);

    cout<<"saldo ->"<<cuenta.verSaldo()<<endl;



}