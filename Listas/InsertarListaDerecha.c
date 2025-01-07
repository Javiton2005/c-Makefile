#include "Lista.h"

int InsertarListaDerecha(LISTA *Lista, void *Elemento){

  if(Lista == NULL) return(-1);
  NODO *nodo = (NODO *)malloc(sizeof(NODO));
  
  if(nodo==NULL) return(-1);

  nodo->Contenido = Elemento;
  nodo->Siguiente = NULL;
  
  if(EsListaVacia(Lista)){

    Lista->Derecha = nodo;
    Lista->Izquierda = nodo;
  }
  else {
    //printf("Solo cambia lado derecho\n");
    Lista->Derecha->Siguiente = nodo;
    Lista->Derecha = nodo;
  }

  return(0);
}
