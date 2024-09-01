# Variables
CC = g++
CFLAGS = -Wall

# Directorio fuente
SRC_DIR = src
BIN_DIR = $(SRC_DIR)

# Definición de programas individuales
PROGRAM1_SRCS = $(SRC_DIR)/Ejemplo_almacenamiento_memoria.cpp
PROGRAM1_TARGET = $(BIN_DIR)/ejemplo_almacenamiento_memoria$(EXE_EXT)

PROGRAM2_SRCS = $(SRC_DIR)/Ejemplo_calloc.cpp
PROGRAM2_TARGET = $(BIN_DIR)/ejemplo_calloc$(EXE_EXT)

PROGRAM3_SRCS = $(SRC_DIR)/Ejemplo_estructura_linked-list.cpp
PROGRAM3_TARGET = $(BIN_DIR)/ejemplo_estructura_linked-list$(EXE_EXT)

PROGRAM4_SRCS = $(SRC_DIR)/Ejemplo_estructura_queue.cpp
PROGRAM4_TARGET = $(BIN_DIR)/ejemplo_estructura_queue$(EXE_EXT)

PROGRAM5_SRCS = $(SRC_DIR)/Ejemplo_estructura_stack.cpp
PROGRAM5_TARGET = $(BIN_DIR)/ejemplo_estructura_stack$(EXE_EXT)

PROGRAM6_SRCS = $(SRC_DIR)/Ejemplo_estructura_tree.cpp
PROGRAM6_TARGET = $(BIN_DIR)/ejemplo_estructura_tree$(EXE_EXT)

PROGRAM7_SRCS = $(SRC_DIR)/Ejemplo_malloc.cpp
PROGRAM7_TARGET = $(BIN_DIR)/ejemplo_malloc$(EXE_EXT)

PROGRAM8_SRCS = $(SRC_DIR)/Ejemplo_new_array.cpp
PROGRAM8_TARGET = $(BIN_DIR)/ejemplo_new_array$(EXE_EXT)

PROGRAM9_SRCS = $(SRC_DIR)/Ejemplo_new_clase.cpp
PROGRAM9_TARGET = $(BIN_DIR)/ejemplo_new_clase$(EXE_EXT)

PROGRAM10_SRCS = $(SRC_DIR)/Ejemplo_new_numeros.cpp
PROGRAM10_TARGET = $(BIN_DIR)/ejemplo_new_numeros$(EXE_EXT)

PROGRAM11_SRCS = $(SRC_DIR)/Ejemplo_new.cpp
PROGRAM11_TARGET = $(BIN_DIR)/ejemplo_new$(EXE_EXT)

PROGRAM12_SRCS = $(SRC_DIR)/Ejemplo_re-reserva_memoria.cpp
PROGRAM12_TARGET = $(BIN_DIR)/ejemplo_re-reserva_memoria$(EXE_EXT)

# Sistema operativo
ifeq ($(OS),Windows_NT)
    RM = del /Q
    EXE_EXT = .exe
    RUN_CMD1 = $(PROGRAM1_TARGET)
    RUN_CMD2 = $(PROGRAM2_TARGET)
    RUN_CMD3 = $(PROGRAM3_TARGET)
    RUN_CMD4 = $(PROGRAM4_TARGET)
    RUN_CMD5 = $(PROGRAM5_TARGET)
    RUN_CMD6 = $(PROGRAM6_TARGET)
    RUN_CMD7 = $(PROGRAM7_TARGET)
    RUN_CMD8 = $(PROGRAM8_TARGET)
    RUN_CMD9 = $(PROGRAM9_TARGET)
    RUN_CMD10 = $(PROGRAM10_TARGET)
    RUN_CMD11 = $(PROGRAM11_TARGET)
    RUN_CMD12 = $(PROGRAM12_TARGET)
else
    RM = rm -f
    EXE_EXT = 
    RUN_CMD1 = ./$(PROGRAM1_TARGET)
    RUN_CMD2 = ./$(PROGRAM2_TARGET)
    RUN_CMD3 = ./$(PROGRAM3_TARGET)
    RUN_CMD4 = ./$(PROGRAM4_TARGET)
    RUN_CMD5 = ./$(PROGRAM5_TARGET)
    RUN_CMD6 = ./$(PROGRAM6_TARGET)
    RUN_CMD7 = ./$(PROGRAM7_TARGET)
    RUN_CMD8 = ./$(PROGRAM8_TARGET)
    RUN_CMD9 = ./$(PROGRAM9_TARGET)
    RUN_CMD10 = ./$(PROGRAM10_TARGET)
    RUN_CMD11 = ./$(PROGRAM11_TARGET)
    RUN_CMD12 = ./$(PROGRAM12_TARGET)
endif

# Regla principal que construye y ejecuta todos los programas
all: $(PROGRAM1_TARGET) $(PROGRAM2_TARGET) $(PROGRAM3_TARGET) $(PROGRAM4_TARGET) $(PROGRAM5_TARGET) $(PROGRAM6_TARGET) $(PROGRAM7_TARGET) $(PROGRAM8_TARGET) $(PROGRAM9_TARGET) $(PROGRAM10_TARGET) $(PROGRAM11_TARGET) $(PROGRAM12_TARGET) run

# Reglas de compilación
$(PROGRAM1_TARGET): $(PROGRAM1_SRCS)
	$(CC) $(CFLAGS) -o $(PROGRAM1_TARGET) $(PROGRAM1_SRCS)

$(PROGRAM2_TARGET): $(PROGRAM2_SRCS)
	$(CC) $(CFLAGS) -o $(PROGRAM2_TARGET) $(PROGRAM2_SRCS)

$(PROGRAM3_TARGET): $(PROGRAM3_SRCS)
	$(CC) $(CFLAGS) -o $(PROGRAM3_TARGET) $(PROGRAM3_SRCS)

$(PROGRAM4_TARGET): $(PROGRAM4_SRCS)
	$(CC) $(CFLAGS) -o $(PROGRAM4_TARGET) $(PROGRAM4_SRCS)

$(PROGRAM5_TARGET): $(PROGRAM5_SRCS)
	$(CC) $(CFLAGS) -o $(PROGRAM5_TARGET) $(PROGRAM5_SRCS)

$(PROGRAM6_TARGET): $(PROGRAM6_SRCS)
	$(CC) $(CFLAGS) -o $(PROGRAM6_TARGET) $(PROGRAM6_SRCS)

$(PROGRAM7_TARGET): $(PROGRAM7_SRCS)
	$(CC) $(CFLAGS) -o $(PROGRAM7_TARGET) $(PROGRAM7_SRCS)

$(PROGRAM8_TARGET): $(PROGRAM8_SRCS)
	$(CC) $(CFLAGS) -o $(PROGRAM8_TARGET) $(PROGRAM8_SRCS)

$(PROGRAM9_TARGET): $(PROGRAM9_SRCS)
	$(CC) $(CFLAGS) -o $(PROGRAM9_TARGET) $(PROGRAM9_SRCS)

$(PROGRAM10_TARGET): $(PROGRAM10_SRCS)
	$(CC) $(CFLAGS) -o $(PROGRAM10_TARGET) $(PROGRAM10_SRCS)

$(PROGRAM11_TARGET): $(PROGRAM11_SRCS)
	$(CC) $(CFLAGS) -o $(PROGRAM11_TARGET) $(PROGRAM11_SRCS)

$(PROGRAM12_TARGET): $(PROGRAM12_SRCS)
	$(CC) $(CFLAGS) -o $(PROGRAM12_TARGET) $(PROGRAM12_SRCS)

# Regla para ejecutar todos los programas secuencialmente
run:
	@echo "Ejecutando Programas secuencialmente..."
	@echo "Ejecutando Programa 1..."
	$(RUN_CMD1)
	@echo                                                                                                                                                                                                                                     "
	@echo                                                                                                                                                                                                                                     "

	@echo "Ejecutando Programa 2..."
	$(RUN_CMD2)
	@echo                                                                                                                                                                                                                                     "
	@echo                                                                                                                                                                                                                                     "

	@echo "Ejecutando Programa 3..."
	$(RUN_CMD3)
	@echo                                                                                                                                                                                                                                     "
	@echo                                                                                                                                                                                                                                     "

	@echo "Ejecutando Programa 4..."
	$(RUN_CMD4)
	@echo                                                                                                                                                                                                                                     "
	@echo                                                                                                                                                                                                                                     "

	@echo "Ejecutando Programa 5..."
	$(RUN_CMD5)
	@echo                                                                                                                                                                                                                                     "
	@echo                                                                                                                                                                                                                                     "

	@echo "Ejecutando Programa 6..."
	$(RUN_CMD6)
	@echo                                                                                                                                                                                                                                     "
	@echo                                                                                                                                                                                                                                     "

	@echo "Ejecutando Programa 7..."
	$(RUN_CMD7)
	@echo                                                                                                                                                                                                                                     "
	@echo                                                                                                                                                                                                                                     "

	@echo "Ejecutando Programa 8..."
	$(RUN_CMD8)
	@echo                                                                                                                                                                                                                                     "
	@echo                                                                                                                                                                                                                                     "

	@echo "Ejecutando Programa 9..."
	$(RUN_CMD9)
	@echo                                                                                                                                                                                                                                     "
	@echo                                                                                                                                                                                                                                     "

	@echo "Ejecutando Programa 10..."
	$(RUN_CMD10)
	@echo                                                                                                                                                                                                                                     "
	@echo                                                                                                                                                                                                                                     "

	@echo "Ejecutando Programa 11..."
	$(RUN_CMD11)
	@echo                                                                                                                                                                                                                                     "
	@echo                                                                                                                                                                                                                                     "

	@echo "Ejecutando Programa 12..."
	$(RUN_CMD12)
	@echo                                                                                                                                                                                                                                     "
	@echo                                                                                                                                                                                                                                     "


# Regla para limpiar los ejecutables
clean:
	$(RM) $(PROGRAM1_TARGET) $(PROGRAM2_TARGET) $(PROGRAM3_TARGET) $(PROGRAM4_TARGET) $(PROGRAM5_TARGET) $(PROGRAM6_TARGET) $(PROGRAM7_TARGET) $(PROGRAM8_TARGET) $(PROGRAM9_TARGET) $(PROGRAM10_TARGET) $(PROGRAM11_TARGET) $(PROGRAM12_TARGET)
