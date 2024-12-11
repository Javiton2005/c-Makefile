<BS>CC = gcc
CFLAGS = -lncurses
TARGET = programa
SOURCES = main.c
OBJECTS = $(SOURCES:.c=.o)

# Regla por defecto que compila y ejecuta, ignorando errores
all: $(TARGET)
	-./$(TARGET)

# Compilar el programa
$(TARGET): $(OBJECTS)
	$(CC) $(SOURCES) $(CFLAGS) -o $@

# Limpiar archivos generados
clean:
	rm -f $(OBJECTS) $(TARGET)

# Indica que estas reglas no son archivos
.PHONY: all clean
