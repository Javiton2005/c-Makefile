#include "Ordenar.h"

CANCION **OrdenarListaGenero(CANCION **ListaEntrada){

  int TotalDeCancione, i,j;
  char Cancion[100], CancionAnterior[100];
  CANCION *tmp;

  TotalDeCancione = Estadisticas.NumeroCanciones;

  for (i=0;i<TotalDeCancione;i++){
    
    if(ListaEntrada[i]->Genero != NULL)
      strcpy(Cancion, ListaEntrada[i]->Genero);
    else
      strcat(Cancion, "??");
    
    for (j=i-1;j>=0;j--){
      strcpy(CancionAnterior, ListaEntrada[i]->Genero);
      
      if (ListaEntrada[j]->Genero != NULL)
        strcpy(CancionAnterior, ListaEntrada[j]->Genero);
      else 
        strcpy(CancionAnterior, "??");

      if(strcmp(Cancion, CancionAnterior)<0){
          tmp = ListaEntrada[j+1];
          ListaEntrada[j+1] = ListaEntrada[j];
          ListaEntrada[j] = tmp;
      }
    }
  }
  return (ListaEntrada);
}
