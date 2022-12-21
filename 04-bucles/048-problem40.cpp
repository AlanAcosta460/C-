/*40. Realice un programa que solicite al usuario que piense un número entre el 1 
y el 100. El programa debe generar un número aleatorio en ese mismo rango [1-100], 
e indicarle al usuario si el numero que digito es menor o mayor al numero aleatorio, 
asi hasta que lo adivine. y por ultimo mostrarle el numero de intentos que le llevo

Generar un numero aleatorio dentro de un rango: 
    variable = limiteInferior + rand() % (LimiteSuperior + 1 - limiteInferior);
*/

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
    int numeroUsuario, numeroRandom, intentos = 0;

    srand(time(0));
    numeroRandom = 1 + (rand() % 100);

    cout << "Se genero un numero aleatorio" << endl;
    cout << "\nIngrese un numero entre 1 y 100 para adivinarlo:" << endl;

    do
    {
        cout << endl;
        cout << "- "; cin >> numeroUsuario;
        intentos ++;
        if (numeroUsuario == numeroRandom)
            cout << "Adivino el numero!!!" << endl;
        
        if (numeroUsuario < numeroRandom)
            cout << "Escribe un numero mayor" << endl;
        else
        {
            if (numeroUsuario > numeroRandom)
                cout << "Escribe un numero menor" << endl;
        }
    } while (numeroUsuario != numeroRandom);

    cout << "Cantidad de intentos para adivinar el numero: " << intentos << endl << endl;
    
    system("pause");

    return 0;
}