
//archivo cabecera Nodo.h
class Nodo
{
private:
    int dato;
    Nodo* enlace; //apuntador al objeto dinámico de la clase nodo
public:
    Nodo(int t)
    {
        dato=t;
        enlace=0; // 0 es el puntero NULL en C++
    }
    //Crea el nodo y lo enlaza a n
    Nodo(int p, Nodo* n)
    {
        dato=p;
        enlace=n;
    }
    int DatoNodo() const
    {
        return dato;
    }
    Nodo* enlaceNodo() const
    {
        return enlace;
    }
    void ponerEnlace(Nodo* sgte)
    {
        enlace=sgte;
    }
};

