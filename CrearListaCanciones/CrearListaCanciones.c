#include "./CrearListaCanciones.h"

LISTA *CrearListaCanciones(char *Path){

  char *Extension = ".txt";
  int TamanoExtension = strlen(Extension)+1;
  FILE *Listado;
  int NumLineas = 0, MaxCaracteresLinea =0, Caracteres=0; 
  char Caracter;
  char *Linea;
  char *Comando = malloc(sizeof("ls.old")+ strlen(Path)*sizeof(char));
  // Inicializa el buffer con la cadena base
  strcpy(Comando, "ls.old ");
  // Concatena el Path
  strcat(Comando, Path);

  LISTA *Lista = CrearLista();

  // Todo esto es para ver cuantas lineas hay y cual es la linea con mas caracteres
  // se puede sustituir por:
  //    ls | wc -l  para la cantidad de archivos que hay 
  //    ls.old | awk '{ print length($0)}' | sort -n | tail -1   Para la palabra mas larga
  // Abrir el listado de cancione
  Listado = popen(Comando, "r");
  
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
  

  while(fgets(Linea, MaxCaracteresLinea, Listado)!=NULL){
    //printf("Archivo: %s", lineas);
    if(strlen(Linea)>TamanoExtension)
      Linea[strlen(Linea)-TamanoExtension] = '\0';

    CANCION *Cancion = CrearCancion(Linea);
    InsertarListaDerecha(Lista, Cancion);
  }
  pclose(Listado);

  return (Lista);
}
