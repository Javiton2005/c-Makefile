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
  
  int index = 0;
  char *output;
  while((output=strsep(&Linea, ";"))!= NULL){    

    char *palabra = strdup(output);
    if(*palabra == '\0')
      palabra = "??";
  
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
  Estadisticas.NumeroCanciones++;
  return(Cancion);
}
