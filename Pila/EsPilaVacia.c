#include "Pila.h"

bool EsPilaVacia(PILA *Pila){
  if(Pila == NULL) return (NULL);

  return(Pila->Contenido == NULL);
}
