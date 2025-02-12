#include "librerias.h"
void main() {
  
  InitGlobal();
  
  CANCION *Lista = NULL;
  CANCION **Ordenada = NULL;
  char *path;
  int Escogido = 0, SubMenu = 0;

  FILE *Direcion = fopen("./.Directorio", "rb");
  if(Direcion == NULL){
    printf("Ha habido un problema con el fichero '.Directorio' revisa si sigue estando\n");
    return;
  }

  fseek(Direcion, 0, SEEK_END);
  int file_size = ftell(Direcion);
  rewind(Direcion);

  Estadisticas.Fichero = (char *)malloc(file_size + 1);
  if(Estadisticas.Fichero == NULL){
    fclose(Direcion);
    printf("Problema al asignar memoria\n");
    return;
  }

  size_t read_size = fread(Estadisticas.Fichero, 1, file_size, Direcion);
  if(read_size != file_size){
    printf("Error al leer el archivo\n");
    fclose(Direcion);
    free (Estadisticas.Fichero);
    return;
  }
  Estadisticas.Fichero[file_size] = '\0';
  fclose(Direcion);

  if(Estadisticas.Fichero == "" || Estadisticas.Fichero == NULL)
    CarpetaDeCanciones();

  Lista = CrearListaCanciones(Estadisticas.Fichero);
  
  while (true) {

    Escogido = MostrarMenu();
    switch (Escogido) {
      case 1: // Cambiar la carpeta en donde esta ubicado las canciones
        CarpetaDeCanciones(); 
        break;
      case 2:  // Muestra las canciones
        Ordenada = InitOrder(Lista);
        MostrarListado(Ordenada);
        break;
      case 3: // Hactualiza la lista de canciones
        Lista = CrearListaCanciones(Estadisticas.Fichero);
        break;
      case 4:
        MenuDePantalla();
        switch (SubMenu){
          case 1:

            break;
          case 2:
            break;
          case 3:
            break;
          case 4:
            Ordenada = OrdenarListaGenero(Lista);
            MostrarListado(Ordenada)
            break;
        }
        break;
      case 5:
        exit(0);
        break;
    }
    
  }

  /*while (fgets(fichero, sizeof(fichero), listado)!= NULL){
    printf("Archivo: %s", fichero);
  }*/
}
