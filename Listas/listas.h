#ifndef LISTAS_H
#define LISTAS_H

#include "../comun.h"

typedef struct _Lista{
  NODO *Derecha;
  NODO *Izquierda;
}LISTA

// Definicion de Funciones
LISTA *CrearLista();
void AñadirListaIzquierda(LISTA *, void *);
void AñadirListaDerecha(LISTA *, void *);
bool EsListaVacia(LISTA *);
int LongitudLista(LISTA *);
void *BorrarListaDerecha(LISTA *);
void *BorrarListaIzquierda(LISTA *);
void *ConsultarListaDerecha(LISTA *);
void *ConsultarListaIzquierda(LISTA *);


#endif
