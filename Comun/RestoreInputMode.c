#include "Comun.h"

// Función para restaurar el modo normal
void restoreInputMode() {
    struct termios t;
    tcgetattr(STDIN_FILENO, &t); // Obtener atributos actuales del terminal
    t.c_lflag |= (ICANON | ECHO); // Restaurar entrada en línea y eco de teclas
    tcsetattr(STDIN_FILENO, TCSANOW, &t); // Aplicar cambios inmediatamente
}
