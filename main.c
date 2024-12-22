#include "comun.h"

void main() {

  FILE *Listado;
  int NumLineas = 0, MaxCaracteresLinea =0, Caracteres=0; 
  char Caracter;
  char *Linea;
  
  // Todo esto es para ver cuantas lineas hay y cual es la linea con mas caracteres
  // se puede sustituir por:
  //    ls | wc -l  para la cantidad de archivos que hay 
  //    ls.old | awk '{ print length($0)}' | sort -n | tail -1   Para la palabra mas larga
  // Abrir el listado de canciones
  Listado = popen("ls.old ./canciones/", "r");
  
  if (Listado == NULL) {
    perror("Error al ejecutar el comando");
    exit(EXIT_FAILURE);
  }
  
  while((Caracter=fgetc(Listado))!=EOF){
    Caracteres++;
    if(Caracter=='\n'){
      NumLineas++;
      if(MaxCaracteresLinea < Caracteres)
        MaxCaracteresLinea = Caracteres;
      Caracteres=0;
    }
  }
  MaxCaracteresLinea++;
  
  Linea = malloc(MaxCaracteresLinea * sizeof(char));
  if(Linea==NULL){
    printf("Error al alocar memoria");
    pclose(Listado);
    exit(EXIT_FAILURE);
  }

  pclose(Listado);
  Listado = popen("ls.old ./canciones/", "r");
  if (Listado == NULL) {
    perror("Error al ejecutar el comando");
    exit(EXIT_FAILURE);
  }

  
  printf("Imprimimos las lineas\n");
  while(fgets(Linea, MaxCaracteresLinea, Listado)!=NULL){
    printf("Archivo: %s", Linea);
  }
  pclose(Listado); 

  printf("Maximo numero de caracteres por linea: %d\n", MaxCaracteresLinea);
  printf("Numero de Lineas: %d\n", NumLineas);
  
  /*while (fgets(fichero, sizeof(fichero), listado)!= NULL){
    printf("Archivo: %s", fichero);
  }*/

  pclose(Listado);
}
