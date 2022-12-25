/*79. Escriba una plantilla de función llamada despliegue() que despliegue
  el valor del argumento único que se le transmite cuando es invocada la 
  función
*/

#include <iostream>
using namespace std;

template <class TIPOD>
void despliegue(TIPOD n);

int main()
{
    int dato1 = 68;
    float dato2 = 32.382;
    double dato3 = 312312.313112;
    char dato4 = 'g';
    char dato5[] = "Hola Mundo";

    despliegue(dato1);
    despliegue(dato2);
    despliegue(dato3);
    despliegue(dato4);
    despliegue(dato5);

    cout << endl; system("pause");
    return 0;
}

template <class TIPOD>
void despliegue(TIPOD dato)
{
    cout << dato << endl;
}