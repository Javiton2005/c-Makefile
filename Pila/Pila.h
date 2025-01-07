#ifndef NPILAS
  #define NPILAS

#include "../Comun/Comun.h"

// Definicion de Pila

typedef NODO PILA;

//Funciones el TAD
PILA *CrearPila();
PILA *Apilar(PILA *, void *);
PILA *Desapilar(PILA *, void **);
void *ConsultarCima(PILA *);
bool EsPilaVacia(PILA *);

#endif // !NPILAS
