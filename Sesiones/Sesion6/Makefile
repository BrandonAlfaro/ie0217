# Variables
CC = g++
CFLAGS = -Wall

# Directorio fuente
SRC_DIR = src
BIN_DIR = $(SRC_DIR)

# Definición de programas individuales
PROGRAM1_SRCS = $(SRC_DIR)/insertionSort.cpp
PROGRAM1_TARGET = $(BIN_DIR)/insertionSort$(EXE_EXT)

PROGRAM2_SRCS = $(SRC_DIR)/optimizedBubbleSort.cpp
PROGRAM2_TARGET = $(BIN_DIR)/optimizedBubbleSort$(EXE_EXT)

PROGRAM3_SRCS = $(SRC_DIR)/quickSort.cpp
PROGRAM3_TARGET = $(BIN_DIR)/quickSort$(EXE_EXT)

PROGRAM4_SRCS = $(SRC_DIR)/selectionSort.cpp
PROGRAM4_TARGET = $(BIN_DIR)/selectionSort$(EXE_EXT)

PROGRAM5_SRCS = $(SRC_DIR)/simpleBubbleSort.cpp
PROGRAM5_TARGET = $(BIN_DIR)/simpleBubbleSort$(EXE_EXT)

# Sistema operativo
ifeq ($(OS),Windows_NT)
    RM = del /Q
    EXE_EXT = .exe
    RUN_CMD1 = $(PROGRAM1_TARGET)
    RUN_CMD2 = $(PROGRAM2_TARGET)
    RUN_CMD3 = $(PROGRAM3_TARGET)
    RUN_CMD4 = $(PROGRAM4_TARGET)
    RUN_CMD5 = $(PROGRAM5_TARGET)
else
    RM = rm -f
    EXE_EXT = 
    RUN_CMD1 = ./$(PROGRAM1_TARGET)
    RUN_CMD2 = ./$(PROGRAM2_TARGET)
    RUN_CMD3 = ./$(PROGRAM3_TARGET)
    RUN_CMD4 = ./$(PROGRAM4_TARGET)
    RUN_CMD5 = ./$(PROGRAM5_TARGET)
endif

# Regla principal que construye y ejecuta todos los programas
all: $(PROGRAM1_TARGET) $(PROGRAM2_TARGET) $(PROGRAM3_TARGET) $(PROGRAM4_TARGET) $(PROGRAM5_TARGET) run

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
# Regla para ejecutar todos los programas secuencialmente
run:
	@echo "Ejecutando Programas secuencialmente..."
	@echo "Ejecutando Programa 1..."
	$(RUN_CMD1)
	@echo
	
	@echo "Ejecutando Programa 2..."
	$(RUN_CMD2)
	@echo
	
	@echo "Ejecutando Programa 3..."
	$(RUN_CMD3)
	@echo
	
	@echo "Ejecutando Programa 4..."
	$(RUN_CMD4)
	@echo
	
	@echo "Ejecutando Programa 5..."
	$(RUN_CMD5)
	@echo

# Regla para limpiar los ejecutables
clean:
	$(RM) $(PROGRAM1_TARGET) $(PROGRAM2_TARGET) $(PROGRAM3_TARGET) $(PROGRAM4_TARGET) $(PROGRAM5_TARGET)
