#ifndef LISTA_H
  #define LISTA_H

#include "../Comun/Comun.h"

typedef struct _Lista{
  NODO *Derecha;
  NODO *Izquierda;
} LISTA;

// Definicion de Funciones
LISTA *CrearLista();
int InsertarListaIzquierda(LISTA *, void *);
int InsertarListaDerecha(LISTA *, void *);
bool EsListaVacia(LISTA *);
int LongitudLista(LISTA *);
void *BorrarListaDerecha(LISTA *);
void *BorrarListaIzquierda(LISTA *);
void *ConsultarListaDerecha(LISTA *);
void *ConsultarListaIzquierda(LISTA *);


#endif
