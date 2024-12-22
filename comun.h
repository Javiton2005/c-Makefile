#ifndef COMUN_H
#define COMUN_H

// Librerias
#include <ncurses.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Structuras
// NODO
typedef struct _Nodo{
  void *contenido;
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

// Aquí tus declaraciones de funciones
void GetString(char *);

#endif
