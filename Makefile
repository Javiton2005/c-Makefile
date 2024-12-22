<BS>CC = gcc
CFLAGS = -lncurses
TARGET = programa
MAIN = main.c
SOURCES = GetString.c
OBJECTS = $(SOURCES:.c=.o)

# Regla por defecto que compila y ejecuta, ignorando errores

# Compilar el programa
$(TARGET): $(OBJECTS)
	$(CC) $(MAIN) $(SOURCES) $(CFLAGS) -o $(TARGET)

# Limpiar archivos generados
clean:
	rm -f $(OBJECTS) $(TARGET)

# Indica que estas reglas no son archivos
.PHONY: all clean

