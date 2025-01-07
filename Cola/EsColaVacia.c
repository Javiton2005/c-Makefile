#include "Cola.h"

bool EsColaVacia(COLA *Cola){
  return ((Cola->Cabecera == NULL) || (Cola->Final == NULL) || (Cola == NULL));
}
