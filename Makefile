# Makefile para compilar el proyecto

# Variables
CC = gcc
CFLAGS = -I. -IListas 
LDFLAGS = -lncurses
OBJDIR = obj
SRCDIR = .
BINDIR = bin
TARGET = programa

# Archivos fuente
SRCS := $(wildcard $(SRCDIR)/*.c) \
				$(wildcard $(SRCDIR)/Listas/*.c) \
				$(wildcard $(SRCDIR)/Comun/*.c) \
				$(wildcard $(SRCDIR)/Pila/*.c) \
				$(wildcard $(SRCDIR)/Cola/*.c) \
				$(wildcard $(SRCDIR)/Pantalla/*.c) \
				$(wildcard $(SRCDIR)/CrearListaCanciones/*.c) \
				$(wildcard $(SRCDIR)/Ordenar/*.c)

# Archivos objeto
OBJS := $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))

# Reglas
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJDIR) 

.PHONY: all clean
