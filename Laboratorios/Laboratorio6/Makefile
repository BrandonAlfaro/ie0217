# Variables

# Compilador a utilizar (g++)
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

# Directorio donde se encuentran los archivos fuente .cpp
SRCDIR = src

# Directorio donde se guardarán los archivos objeto .o
OBJDIR = obj

# Directorio donde se generará el archivo ejecutable
BINDIR = bin

# Nombre y ubicación del archivo ejecutable final
TARGET = ./$(BINDIR)/text_processor.exe

# Archivos fuente y objetos
SOURCES = $(wildcard ./$(SRCDIR)/*.cpp)
OBJECTS = $(SOURCES:./$(SRCDIR)/%.cpp=./$(OBJDIR)/%.o)

# Reglas
all: $(TARGET)

# Regla para generar el archivo ejecutable a partir de los archivos objeto
$(TARGET): $(OBJECTS)
	@if not exist $(BINDIR) mkdir $(BINDIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regla para compilar los archivos fuente (.cpp) en archivos objeto .o
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@if not exist $(OBJDIR) mkdir $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para limpiar el proyecto eliminando los archivos objeto y el directorio de binarios
clean:
	@if exist $(OBJDIR) del /Q $(OBJDIR)\*.o
	@if exist $(BINDIR) rd /s /q $(BINDIR)

# Regla para ejecutar el programa después de compilarlo
run: $(TARGET)
	$(TARGET) ./data/file1.txt

.PHONY: all clean run
