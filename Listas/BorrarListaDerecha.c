#include "Lista.h"

void *BorrarListaDerecha(LISTA *Lista){
  
  if(EsListaVacia(Lista)) return (NULL);
  
  int i = 0;
  int longitud = LongitudLista(Lista);
  
  NODO *NodoDevolver = Lista->Derecha;
  void *devolver = NodoDevolver->Contenido;

  NODO *aux = Lista->Izquierda;
  
  if(longitud<2){
    Lista->Derecha=NULL;
    Lista->Izquierda=NULL;
  }
  else {
    while (aux->Siguiente != NodoDevolver)
      aux = aux->Siguiente;
    
    aux->Siguiente = NULL;
    Lista->Derecha = aux;
  }

  free(NodoDevolver);
  return(devolver);
}
