#include "Lista.h"

bool BorrarLista(LISTA *Lista){
  
  if(Lista == NULL) return (1);
  int Longitud = LongitudLista(Lista);
  
  while(Longitud){
    BorrarListaDerecha(Lista);
    Longitud--;  
  }

  free(Lista);
  return 1;

}
