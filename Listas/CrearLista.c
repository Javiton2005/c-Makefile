#include "Lista.h"

LISTA *CrearLista(){
  
  LISTA *Lista = malloc(sizeof(LISTA));
  
  if(Lista == NULL){
    printf("No hay espacio");
    return(NULL);
  }

  Lista->Derecha = NULL;
  Lista->Izquierda = NULL;

  return (Lista);

}
