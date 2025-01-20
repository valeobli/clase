#ifndef LISTA_H
#define LISTA_H

#include "Nodo.hpp"


class Lista
{
   private:
   Nodo *cab;
public:
   Lista();
   void insertaInicio(int d);
   void insertaFinal(int d);
   void Recorre();
   void eliminaNodo(int d);
   void insertaOrdenado(int d);
   ~Lista();
};


#endif // LISTA_H