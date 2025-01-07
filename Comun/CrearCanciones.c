/*
 * Crear Canciones
 * Input: Char*  Nombre;Artista;Duracion;Genero
 * Output: CANCION*
 * Funcion:
 *  Recibe la frase y separa los campos
 *
 */

#include "Comun.h"

CANCION *CrearCancion(char *Linea){

  CANCION *Cancion = malloc(sizeof(CANCION));
  
  printf("Crea la cancion\n");
  int index = 0;
  char *output;
  while((output=strsep(&Linea, ";"))!= NULL){    

    char *palabra = strdup(output);
    switch (index) {
      case 0:
        Cancion->Nombre = palabra;
        index++;
        break;
      case 1:
        Cancion->Artista = palabra;
        index++;
        break;
      case 2:
        Cancion->Duracion = palabra;
        index++;
        break;
      case 3:
        Cancion->Genero = palabra;
        index++;
        break;
    }
  }
  return(Cancion);
}
