#include "Pila.h"
void *ConsultarCima(PILA *Pila){
  
  if(Pila == NULL) return(NULL);
  return (Pila->Contenido);
}
