#include "Lista.h"

int InsertarListaIzquierda(LISTA *Lista, void *Elemento){
  
  if(Lista==NULL) return(-1);
  
  NODO *nodo = malloc(sizeof(NODO));
  if(nodo==NULL) return(-1);

  nodo->Contenido = Elemento;
  nodo->Siguiente = NULL;
  
  if(EsListaVacia(Lista)){
    Lista->Izquierda = nodo;
    Lista->Derecha = nodo;
  }
  else{
    nodo->Siguiente = Lista->Izquierda;
    Lista->Izquierda = nodo;
  }
  return(0);
}
