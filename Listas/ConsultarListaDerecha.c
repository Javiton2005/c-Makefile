#include "Lista.h"

void *ConsultarListaDerecha(LISTA *Lista){
   
  if(EsListaVacia(Lista)) return(NULL);

  return(Lista->Derecha->Contenido);

}
