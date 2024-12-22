/*
NOMBRE:_getString 
Argumentos: Char *input es en donde se va a guardar el input del usuario
Descricon: Se ejecutara el bucle hasta que encuentre un "\n"
*/
#include "comun.h"

void GetString(char *input){

    input[0] = '\0'; // Asegurar que esté terminado en NULL

    // Configuración de la terminal
    nocbreak();
    echo();

    int ch = getch();
    size_t len = 0;

    while (ch != '\n') {
        char* temp = realloc(input, len + 2); // Reservar espacio para el nuevo carácter y el terminador NULL
        if (!temp) {
            free(input);
            perror("Error reallocating memory");
            exit(EXIT_FAILURE);
        }
        input = temp;

        input[len++] = ch;
        input[len] = '\0'; // Asegurar que siempre esté terminado en NULL

        ch = getch();
    }
}

