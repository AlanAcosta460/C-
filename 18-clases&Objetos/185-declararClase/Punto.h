//Declaracion de una clase

class Punto 
{
    //Atributos
    private:
        int x, y;

    //Metodos
    public:
        //Constructor 1
        Punto(int _x, int _y) //Toda clase necesita de un constructor con el mismo nombre
        {
            x = _x;
            y = _y;
        }

        //Constructor 2
        Punto() 
        {
            x = y = 0;
        }

        void setX(int valorX); //Establecemos el valor de x
        void setY(int valorY); //Establecemos el valor de y
        int getX(); //Obtener el valor de x
        int getY(); //Obtener el valor de y
};  