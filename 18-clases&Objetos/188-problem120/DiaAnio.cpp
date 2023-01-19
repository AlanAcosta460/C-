#include <iostream>
#include "DiaAnio.h"
using namespace std;

bool DiaAnio::igual(DiaAnio &d)
{
    if (dia == d.dia && mes == d.mes)
        return true;
    else
        return false;
}

void DiaAnio::visualizar()
{
    cout << "Dia: " << dia << endl;
    cout << "Mes: " << mes << endl;
}