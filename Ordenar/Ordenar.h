#ifndef ORDEN
  #define ORDEN

#include "../Comun/Comun.h"
#include "../Listas/Lista.h"

// Ordenadion con el metodo de seleccion

CANCION **InitOrder(CANCION *);
CANCION **Ordenar();
CANCION **OrdenarListaNombre(CANCION **);
CANCION **OrdenarListaArtista(CANCION **);
CANCION **OrdenarListaGenero(CANCION **);
CANCION **OrdenarListaDuracion(CANCION **);

#endif // !ORDEN
