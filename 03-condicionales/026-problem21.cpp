/*21. Escriba un programa que lea de la entrada estándar tres números. 
Despues debe leer un cuarto número e indicar si el numero coincide con 
alguno de los introducidos con anterioridad*/

#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, n4;

    cout << "Intoduzca tres numeros:" << endl; cin >> n1 >> n2 >> n3; 
    cout << "\nIntroduza un cuarto numero: "; cin >> n4;

    if(n4 == n1 || n4 == n2 || n4 == n3)
        cout << "\nEl cuarto numero coincide con uno o mas de los anteriores"<< endl;
    else
        cout << "\nEl cuarto numero no es igual a ningun numero anterior" << endl;

    return 0;
}