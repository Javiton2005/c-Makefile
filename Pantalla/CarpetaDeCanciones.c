#include "Pantalla.h"

void CarpetaDeCanciones(){
  
  char seleccionado;
  size_t LongitudRuta = 0;
  
  FILE *Archivo= NULL;

  if(Estadisticas.Fichero == NULL)
    printf("No hay adjudicado ningun fichero\n");
  else 
    printf("El directorio seleccionado es: %s\n", Estadisticas.Fichero);
  
  printf("Quieres cambiar el fichero? N/y\n");
  setInputModeRaw();
  seleccionado = getchar();
  restoreInputMode();
  
  if(seleccionado != 'y' && seleccionado != 'Y')
    return;
  
  printf("Inserte la nueva ruta: ");
  int LongitudFinal = getline(&Estadisticas.Fichero, &LongitudRuta, stdin); // Leer entrada dinámica
  Estadisticas.Fichero[LongitudFinal-1] = '\0';
  
  remove(".Directorio");
  Archivo = fopen(".Directorio", "wb");
  if(Archivo == NULL){
    printf("Ha habido un error al abrir el archivo\n");
    return;
  }

  fwrite(Estadisticas.Fichero, sizeof(int), LongitudFinal, Archivo);
  fclose(Archivo);
  return;  
}
