#include "../Pantalla/Pantalla.h"

void MostrarListado(LISTA **Lista){
  
  int Longitud = LongitudLista(*Lista);
  int i = 0;
  int Selecionada = 0;

  LISTA *Imprimir = CrearLista();
  LISTA *ListaAux = *Lista;
  COLA *Cola = CrearCola();
  PILA *Pila = CrearPila();

  CANCION *Cancion;

  char input;
  for (;i<10;i++){
    Cancion = BorrarListaDerecha(ListaAux);
    InsertarListaIzquierda(Imprimir, Cancion);
  }

  while((Cancion=BorrarListaDerecha(ListaAux))!= NULL){
    Encolar(Cola, Cancion);
  }
  
  BorrarLista(ListaAux);

  CANCION *CancionSelecionada;

  while (true) {

    system("clear");
    
    for(i=0;i<10;i++){
      Cancion = BorrarListaIzquierda(Imprimir);
      if(i==Selecionada){
        printf("->");
        CancionSelecionada = Cancion;
      }
      printf("Cancion: %s\t", Cancion->Nombre);
      printf("%s\n", Cancion->Genero);
      InsertarListaDerecha(Imprimir, Cancion);
    }
    setInputModeRaw();
    input = getchar();
    switch (input) {
      case '+':
        if(Selecionada != 0){
          Selecionada --;
          break;
        }

        if(EsPilaVacia(Pila))
          break;
        Pila = Desapilar(Pila, (void **) &Cancion);
        InsertarListaIzquierda(Imprimir, Cancion);
        
        Cancion = BorrarListaDerecha(Imprimir);
        InsertarCabecera(Cola, Cancion);

        break;
      case '-':
        if(Selecionada != 9){
          Selecionada ++;
          break;
        }
        if(EsColaVacia(Cola))
          break;
        
        Cancion = Desencolar(Cola);
        InsertarListaDerecha(Imprimir, Cancion);

        Cancion = BorrarListaIzquierda(Imprimir);
        Pila = Apilar(Pila, Cancion);
        break;
      case '\n':
        printf("Cancion Selecionada: \n\t%s\n\t%s\n\t%s\n\t%s\n", CancionSelecionada->Nombre, CancionSelecionada->Genero, CancionSelecionada->Duracion, CancionSelecionada-> Artista);  
        getchar();
      case 27:
        restoreInputMode();
        return; 
        break;

    }
  }
}
