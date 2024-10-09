-- Crear una base de datos
CREATE DATABASE IF NOT EXISTS InventarioTienda;

-- Usar la base de datos
USE InventarioTienda;

-- Creación de la tabla Productos
CREATE TABLE Productos (
    IDProducto INT AUTO_INCREMENT PRIMARY KEY,
    NombreProducto VARCHAR(100),
    Cantidad INT,
    Precio DECIMAL(10, 2)
);

-- Inserción de productos
INSERT INTO Productos (NombreProducto, Cantidad, Precio)
VALUES 
    ('Laptop', 10, 1000.50),
    ('Teclado', 50, 20.99),
    ('Mouse', 30, 15.50);

-- Seleccionar todos los productos
SELECT * FROM Productos;

-- Actualizar la cantidad del producto Mouse
UPDATE Productos
SET Cantidad = 25
WHERE NombreProducto = 'Mouse';

-- Eliminar el producto Teclado
DELETE FROM Productos
WHERE NombreProducto = 'Teclado';

-- Consultar el precio del producto Laptop
SELECT Precio
FROM Productos
WHERE NombreProducto = 'Laptop';
