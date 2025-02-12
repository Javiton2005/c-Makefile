#include "Comun.h"


void setInputModeRaw() {
    struct termios t;
    tcgetattr(STDIN_FILENO, &t); // Obtener atributos actuales del terminal
    t.c_lflag &= ~(ICANON | ECHO); // Desactivar entrada en línea y eco de teclas
    tcsetattr(STDIN_FILENO, TCSANOW, &t); // Aplicar cambios inmediatamente
}
