#ifndef COLA_H
  #define COLA_H

#include "../Comun/Comun.h"

typedef struct Cola{
  NODO *Cabecera;
  NODO *Final;
} COLA;

//Prototipos del TAD Cola

COLA *CrearCola();
int Encolar(COLA *, void *);
void *Desencolar(COLA *);
void *ConsultarCola(COLA *);
int InsertarCabecera(COLA *, void *);
bool EsColaVacia(COLA *);

#endif // !COLA_H
