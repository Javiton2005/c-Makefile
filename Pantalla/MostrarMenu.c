#include "Pantalla.h"

int MostrarMenu(){
  
  int Opcion = 0;
  system("clear");
  printf("1: Carpeta de canciones\n");
  printf("2: Ver Listado\n");
  printf("3: Recargar Canciones\n");
  printf("4: Ordenar\n");
  printf("5: Salir\n");
  
  setInputModeRaw();
  Opcion = getchar();
  restoreInputMode(); 
  Opcion -= 48;
  //printf("Opcion = %d\n", Opcion);
  return (Opcion);
}
