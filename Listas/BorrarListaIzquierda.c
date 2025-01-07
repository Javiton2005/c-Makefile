#include "Lista.h"

void *BorrarListaIzquierda(LISTA *Lista){
  
  if(EsListaVacia(Lista)) return NULL;

  NODO *NodoDevolver = Lista->Izquierda;
  void *Devolver = NodoDevolver->Contenido;
  
  if(LongitudLista(Lista)<2)
    Lista->Derecha = NULL;

  Lista->Izquierda = NodoDevolver->Siguiente;

  free(NodoDevolver);
  return (Devolver);

}
