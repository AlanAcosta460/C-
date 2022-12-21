/*39. En una clase de 5 alumnos se han realizado 3 exámenes y se requiere 
determinar el número de:
    a) Alumnos que aprobaron todos los exámenes
    b) Alumnos que aprobaron al menos un examen
    c) Alumnos que aprobaron únicamente el último examen
Realice un programa que permita la lectura de los datos y el cálculo de las 
estadisticas*/

#include <iostream>
using namespace std;

int main()
{
    float calExamen1, calExamen2, calExamen3;
    int tresExamenes = 0, unExamen = 0, ultimoExamen = 0;

    for (int i = 1; i <= 5; i ++)
    {
        cout << "\tAlumno " << i << endl;
        cout << "Calificacion del 1er examen: "; cin >> calExamen1;
        cout << "Calificacion del 2do examen: "; cin >> calExamen2;
        cout << "Calificacion del 3er examen: "; cin >> calExamen3;
        cout << endl;

        if (calExamen1 >= 6 && calExamen2 >= 6 && calExamen3 >= 6)
            tresExamenes ++;

        if (calExamen1 >= 6 || calExamen2 >= 6 || calExamen3 >= 6)
            unExamen ++;

        if (calExamen1 < 6 && calExamen2 < 6 && calExamen3 >= 6)
            ultimoExamen ++;
    }

    cout << "La cantidad de alumnos que aprobaron todos los examnes es: " << tresExamenes << endl;
    cout << "La cantidad de alumnos que aprobaron al menos un examen es: " << unExamen << endl;
    cout << "La cantidad de alumnos que aprobaron solo el ultimo examen es: " << ultimoExamen << endl << endl;

    system("pause");

    return 0;
}