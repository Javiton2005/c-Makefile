#ifndef COMUN_H 
  #define COMUN_H
// Librerias
#include <ncurses.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
// Structuras
// NODO
typedef struct _Nodo{
  void *Contenido;
  struct _Nodo *Siguiente;
}NODO;

// Cancion
typedef struct _Cancion{
  char *Nombre;
  char *Duracion;
  char *Artista;
  char *Genero;
}CANCION;


// DEFINICIONES
#define TRUE 1
#define FALSE 0

extern struct _Estadisticas {
  char *Fichero;
  int NumeroCanciones;
} Estadisticas;

// Aquí tus declaraciones de funciones
void GetString(char *);
CANCION *CrearCancion(char *);
void InitGlobal();

void restoreInputMode();
void setInputModeRaw();
#endif
