/*75. Escriba una funcion llamada mult() que acepte dos números en punto
  flotante como paramétros, multiplique estos dos números y despliegue el resultado
*/

#include <iostream>
using namespace std;

void pedirDatos();
void mult(float n1, float n2);

float numero1, numero2; //variables globales

int main()
{
    pedirDatos();

    mult(numero1, numero2);
    
    cout << endl; system("pause");
    return 0;
}

void pedirDatos()
{
    cout << "Ingrese dos numero con decimal: " << endl; cin >> numero1 >> numero2;
}

void mult(float n1, float n2)
{
    cout << "\nLa multiplicacion es: " << n1 * n2 << endl;
}