#include "Pantalla.h"

int MenuDePantalla(){
  int Opcion = 0;
  system("clear");
  printf("1: Ordenar por Titulo\n");
  printf("2: Ordenar por Autor\n");
  printf("3: Ordenar por Duracion\n");
  printf("4: Ordenar por Genero\n");

  setInputModeRaw();
  Opcion = getchar();
  restoreInputMode();

  Opcion -= 48;

  return(Opcion);
}
