#include "./Ordenar.h"

LISTA **InitOrder(LISTA *Lista){

  int i=0;

  if(Estadisticas.NumeroCanciones == 0 || Lista == NULL){
    printf("No hay canciones creadas\n");
    return (NULL);
  }
  LISTA **Ordernada = malloc(sizeof(CANCION *)*Estadisticas.NumeroCanciones);
  
  if(Ordernada == NULL) return (NULL);
  
  for(;i<Estadisticas.NumeroCanciones; i++) Ordernada[i] = &Lista[i];

  return (Ordernada);
}
