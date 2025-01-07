#include "Lista.h"

int LongitudLista(LISTA *Lista){

  if(Lista->Izquierda == NULL || Lista->Derecha == NULL) return(0);
  int Longitud = 0;
  NODO *NodoActual = Lista->Izquierda;

  while(NodoActual != NULL){
    NodoActual = NodoActual->Siguiente;
    Longitud++;
  }
  
  return (Longitud);
}
