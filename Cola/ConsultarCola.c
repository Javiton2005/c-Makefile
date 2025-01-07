#include "Cola.h"

void *ConsultarCola(COLA *Cola){

  if(EsColaVacia(Cola)) return (NULL);

  return(Cola->Cabecera->Contenido);
}
