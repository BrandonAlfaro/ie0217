# Variables
CC = g++
CFLAGS = -Wall

# Directorios
SRC_DIR = src
BIN_DIR = build

# Definición de programas individuales para los archivos de la imagen
PROGRAM1_SRCS = $(SRC_DIR)/class_template.cpp
PROGRAM1_TARGET = $(BIN_DIR)/class_template$(EXE_EXT)

PROGRAM2_SRCS = $(SRC_DIR)/exception_2.cpp
PROGRAM2_TARGET = $(BIN_DIR)/exception_2$(EXE_EXT)

PROGRAM3_SRCS = $(SRC_DIR)/exception.cpp
PROGRAM3_TARGET = $(BIN_DIR)/exception$(EXE_EXT)

PROGRAM4_SRCS = $(SRC_DIR)/func_template.cpp
PROGRAM4_TARGET = $(BIN_DIR)/func_template$(EXE_EXT)

PROGRAM5_SRCS = $(SRC_DIR)/multi_exceptions.cpp
PROGRAM5_TARGET = $(BIN_DIR)/multi_exceptions$(EXE_EXT)

PROGRAM6_SRCS = $(SRC_DIR)/multi_params_template.cpp
PROGRAM6_TARGET = $(BIN_DIR)/multi_params_template$(EXE_EXT)

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
else
    RM = rm -f
    EXE_EXT = 
    RUN_CMD1 = ./$(PROGRAM1_TARGET)
    RUN_CMD2 = ./$(PROGRAM2_TARGET)
    RUN_CMD3 = ./$(PROGRAM3_TARGET)
    RUN_CMD4 = ./$(PROGRAM4_TARGET)
    RUN_CMD5 = ./$(PROGRAM5_TARGET)
    RUN_CMD6 = ./$(PROGRAM6_TARGET)
endif

# Regla principal que construye y ejecuta todos los programas
all: $(PROGRAM1_TARGET) $(PROGRAM2_TARGET) $(PROGRAM3_TARGET) $(PROGRAM4_TARGET) $(PROGRAM5_TARGET) $(PROGRAM6_TARGET) run

# Crear el directorio de los binarios si no existe
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Reglas de compilación
$(PROGRAM1_TARGET): $(BIN_DIR) $(PROGRAM1_SRCS)
	$(CC) $(CFLAGS) -o $(PROGRAM1_TARGET) $(PROGRAM1_SRCS)

$(PROGRAM2_TARGET): $(BIN_DIR) $(PROGRAM2_SRCS)
	$(CC) $(CFLAGS) -o $(PROGRAM2_TARGET) $(PROGRAM2_SRCS)

$(PROGRAM3_TARGET): $(BIN_DIR) $(PROGRAM3_SRCS)
	$(CC) $(CFLAGS) -o $(PROGRAM3_TARGET) $(PROGRAM3_SRCS)

$(PROGRAM4_TARGET): $(BIN_DIR) $(PROGRAM4_SRCS)
	$(CC) $(CFLAGS) -o $(PROGRAM4_TARGET) $(PROGRAM4_SRCS)

$(PROGRAM5_TARGET): $(BIN_DIR) $(PROGRAM5_SRCS)
	$(CC) $(CFLAGS) -o $(PROGRAM5_TARGET) $(PROGRAM5_SRCS)

$(PROGRAM6_TARGET): $(BIN_DIR) $(PROGRAM6_SRCS)
	$(CC) $(CFLAGS) -o $(PROGRAM6_TARGET) $(PROGRAM6_SRCS)

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
	
	@echo "Ejecutando Programa 6..."
	$(RUN_CMD6)
	@echo

# Regla para limpiar los ejecutables
clean:
	$(RM) $(PROGRAM1_TARGET) $(PROGRAM2_TARGET) $(PROGRAM3_TARGET) $(PROGRAM4_TARGET) $(PROGRAM5_TARGET) $(PROGRAM6_TARGET)
