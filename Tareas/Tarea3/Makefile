# Variables
CC = g++
CFLAGS = -Wall

# Directorios
PROGRAM1_DIR = src/ABB
PROGRAM2_DIR = src/LEDC

# Archivos fuente y de cabecera para cada programa
PROGRAM1_SRCS = $(PROGRAM1_DIR)/ABB.cpp $(PROGRAM1_DIR)/main.cpp
PROGRAM1_HEADERS = $(PROGRAM1_DIR)/ABB.hpp $(PROGRAM1_DIR)/nodo.hpp

PROGRAM2_SRCS = $(PROGRAM2_DIR)/cancion.cpp $(PROGRAM2_DIR)/listaEnlazada.cpp $(PROGRAM2_DIR)/main.cpp
PROGRAM2_HEADERS = $(PROGRAM2_DIR)/cancion.hpp $(PROGRAM2_DIR)/listaEnlazada.hpp

# Nombre de los ejecutables
PROGRAM1_TARGET = programa1$(EXE_EXT)
PROGRAM2_TARGET = programa2$(EXE_EXT)

# Sistema operativo
ifeq ($(OS),Windows_NT)
    RM = del /Q
    EXE_EXT = .exe
    RUN_CMD1 = $(PROGRAM1_TARGET)
    RUN_CMD2 = $(PROGRAM2_TARGET)
else
    RM = rm -f
    EXE_EXT = 
    RUN_CMD1 = ./$(PROGRAM1_TARGET)
    RUN_CMD2 = ./$(PROGRAM2_TARGET)
endif

# Reglas
all: $(PROGRAM1_TARGET) $(PROGRAM2_TARGET) run

$(PROGRAM1_TARGET): $(PROGRAM1_SRCS) $(PROGRAM1_HEADERS)
	$(CC) $(CFLAGS) -o $(PROGRAM1_TARGET) $(PROGRAM1_SRCS)

$(PROGRAM2_TARGET): $(PROGRAM2_SRCS) $(PROGRAM2_HEADERS)
	$(CC) $(CFLAGS) -o $(PROGRAM2_TARGET) $(PROGRAM2_SRCS)

run:
	@echo "Ejecutando Programa 1..."
	$(RUN_CMD1)
	@echo
	@echo "Ejecutando Programa 2..."
	$(RUN_CMD2)

clean:
	$(RM) $(PROGRAM1_TARGET) $(PROGRAM2_TARGET)
