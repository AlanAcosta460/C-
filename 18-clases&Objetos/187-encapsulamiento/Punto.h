class Punto 
{
    //public: -> cualquier codigo fuente puede acceder y modificar los valores
    //protectect: -> la misma clase o clases hijas pueden acceder a los miembros de esta clase  
    private:
        int x, y;

    public:
        Punto(int _x, int _y)
        {
            x = _x;
            y = _y;
        }

        Punto() 
        {
            x = y = 0;
        }

        void setX(int valorX); 
        void setY(int valorY); 
        int getX(); 
        int getY();
};  