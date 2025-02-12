#include <stdio.h>


struct _Estadisticas {  
  char *Fichero;
  int NumeroCanciones;
} Estadisticas;

void InitGlobal(){
  Estadisticas.Fichero = NULL;
  Estadisticas.NumeroCanciones = 0;
}
