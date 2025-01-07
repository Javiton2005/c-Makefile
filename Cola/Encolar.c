#include "Cola.h"

int Encolar(COLA *Cola, void *Elemento){

  if(Cola == NULL) return(-1); 
  NODO *Nodo = malloc(sizeof(NODO));
  if(Nodo == NULL) return(-1);

  Nodo->Contenido = Elemento;
  
  if(EsColaVacia(Cola)){
    Cola->Cabecera = Nodo;
    Cola->Final = Nodo;
  }
  else{
    Cola->Final->Siguiente= Nodo;
    Cola->Final = Nodo;
  }
  return (0);
}
