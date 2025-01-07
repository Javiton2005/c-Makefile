#include "Lista.h"

bool EsListaVacia(LISTA *Lista){

   return((Lista -> Izquierda == NULL) ||(Lista -> Derecha == NULL)|| (Lista == NULL)); 

}
