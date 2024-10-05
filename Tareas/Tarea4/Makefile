# Variables
CC = g++
CFLAGS = -Wall

# Directorios
SORTER_DIR = src

# Archivos fuente y de cabecera para el programa
SORTER_SRCS = $(SORTER_DIR)/algoritmos_ordenamiento.cpp $(SORTER_DIR)/random_data.cpp $(SORTER_DIR)/main.cpp
SORTER_HEADERS = $(SORTER_DIR)/algoritmos_ordenamiento.hpp $(SORTER_DIR)/random_data.hpp

# Nombre del ejecutable
SORTER_TARGET = sorter$(EXE_EXT)

# Sistema operativo
ifeq ($(OS),Windows_NT)
    RM = del /Q
    EXE_EXT = .exe
    RUN_CMD = $(SORTER_TARGET)
else
    RM = rm -f
    EXE_EXT =
    RUN_CMD = ./$(SORTER_TARGET)
endif

# Reglas
all: $(SORTER_TARGET)

$(SORTER_TARGET): $(SORTER_SRCS) $(SORTER_HEADERS)
	$(CC) $(CFLAGS) -o $(SORTER_TARGET) $(SORTER_SRCS)

run:
	@echo "Ejecutando el ordenador..."
	$(RUN_CMD)

run_args:
	@echo "Ejecutando el ordenador con argumentos..."
	$(RUN_CMD) $(filter-out $@,$(MAKECMDGOALS))

clean:
	$(RM) $(SORTER_TARGET)

# Esta línea es necesaria para evitar que Make intente procesar los argumentos como objetivos
%:
	@:
