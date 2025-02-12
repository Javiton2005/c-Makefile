#include "Pila.h"

bool EsPilaVacia(PILA *Pila){

  return((Pila==NULL)||(Pila->Contenido == NULL));
}
