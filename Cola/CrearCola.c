#include "Cola.h"

COLA *CrearCola(){

  COLA *Cola = malloc(sizeof(COLA));
  if(Cola == NULL) return (NULL);

  Cola->Cabecera = NULL;
  Cola->Final = NULL;

  return (Cola);
}
