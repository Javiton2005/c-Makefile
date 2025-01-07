#include "Cola.h"

int InsertarCabecera(COLA *Cola, void *Elemento){

  if(Cola == NULL) return(-1);

  NODO *Nodo = malloc(sizeof(NODO));

  if(Nodo == NULL) return(-1);
  Nodo->Contenido = Elemento;
  Nodo->Siguiente = Cola->Cabecera;
  
  if(EsColaVacia(Cola))
      Cola->Final = Nodo;
  Cola->Cabecera = Nodo;

  return (0);
}
