CC = g++
CFLAGS = -Wall
TARGET = empleados.exe

SRCS = src\main.cpp src/Empleado.cpp src\EmpleadoMedioTiempo.cpp src\EmpleadoTiempoCompleto.cpp
HEADERS = src\EmpleadoMedioTiempo.hpp src\EmpleadoTiempoCompleto.hpp src\Empleado.hpp

all: $(TARGET) run

$(TARGET): $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

run:
	./$(TARGET)

clean:
	del $(TARGET)
