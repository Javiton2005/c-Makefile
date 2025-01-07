#include "Pila.h"

PILA *Apilar(PILA *Pila, void *Elemento){

  NODO *Nodo = malloc(sizeof(NODO));

  if(Nodo == NULL) return (NULL);

  Nodo->Contenido = Elemento;
  Nodo->Siguiente = Pila;

  return (Nodo);
}
