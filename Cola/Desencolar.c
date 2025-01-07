#include "Cola.h"

void *Desencolar(COLA *Cola){

  if(EsColaVacia(Cola) || Cola == NULL) return(NULL);
  NODO *Nodo = Cola->Cabecera;
  void *Devolver = Nodo->Contenido;

  Cola->Cabecera = Nodo->Siguiente;

  free(Nodo);

  if(Cola->Cabecera == NULL) Cola->Final = NULL;

  return(Cola);
}
