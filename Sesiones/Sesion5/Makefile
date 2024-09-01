# Variables
CC = g++
CFLAGS = -Wall

# Directorios
PROGRAM1_DIR = src/Programa1
PROGRAM2_DIR = src/Programa2

# Archivos fuente y de cabecera para cada programa
PROGRAM1_SRCS = $(PROGRAM1_DIR)/Conversiones.cpp $(PROGRAM1_DIR)/main.cpp
PROGRAM1_HEADERS = $(PROGRAM1_DIR)/Conversiones.hpp

PROGRAM2_SRCS = $(PROGRAM2_DIR)/Estadistica_Arreglo.cpp $(PROGRAM2_DIR)/main.cpp
PROGRAM2_HEADERS = $(PROGRAM2_DIR)/Estadistica_Arreglo.hpp

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

# Parámetros para el Programa2
PROGRAM2_ARGS = 5 10 15 20 25

# Reglas
all: $(PROGRAM1_TARGET) $(PROGRAM2_TARGET) run

$(PROGRAM1_TARGET): $(PROGRAM1_SRCS) $(PROGRAM1_HEADERS)
	$(CC) $(CFLAGS) -o $(PROGRAM1_TARGET) $(PROGRAM1_SRCS)

$(PROGRAM2_TARGET): $(PROGRAM2_SRCS) $(PROGRAM2_HEADERS)
	$(CC) $(CFLAGS) -o $(PROGRAM2_TARGET) $(PROGRAM2_SRCS)

run:
	@echo "Ejecutando Programa 1..."
	$(RUN_CMD1)
	@echo "Ejecutando Programa 2 con parámetros: $(PROGRAM2_ARGS)..."
	$(RUN_CMD2) $(PROGRAM2_ARGS)

clean:
	$(RM) $(PROGRAM1_TARGET) $(PROGRAM2_TARGET)
