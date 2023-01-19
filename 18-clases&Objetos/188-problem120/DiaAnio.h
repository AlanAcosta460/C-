class DiaAnio
{
    private: 
        int dia, mes;

    public:
        DiaAnio(int _dia, int _mes)
        {
            dia = _dia;
            mes = _mes;
        }

        bool igual(DiaAnio &d);
        void visualizar();
};