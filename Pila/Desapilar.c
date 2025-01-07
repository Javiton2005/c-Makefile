#include "Pila.h"

PILA *Desapilar(PILA *Pila, void **Elemento){

  if(EsPilaVacia(Pila)){
    *Elemento == NULL;
    return(NULL);
  }

  *Elemento = Pila->Contenido;

  PILA *PilaDevolver = Pila->Siguiente;

  free(Pila);

  return (PilaDevolver);
}
