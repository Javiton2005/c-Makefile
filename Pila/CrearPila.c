#include "Pila.h"

PILA *CrearPila(){
  
  PILA *Pila = malloc(sizeof(NODO));

  if(Pila == NULL) return(NULL);

  Pila->Contenido = NULL;
  Pila->Siguiente = NULL;

  return (Pila);
}
