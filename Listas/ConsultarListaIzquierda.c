#include "Lista.h"

void *ConsultarListaIzquierda(LISTA *Lista){

  if(EsListaVacia(Lista)) return(NULL);

  return(Lista->Izquierda->Contenido);

}
