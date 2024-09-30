# Contenidos de la sesión 11


- Bases de datos
    - Tipos de bases de datos
- SQL
    - Operaciones CRUD
    - Partes de una tabla
    - Comandos para SELECT
    - Comandos para JOIN
    - Respaldo y recuperación de bases de datos
    - Constraints


# Comandos de SQL

## Comandos de select

1. **SELECT**: Se utiliza para seleccionar datos de una tabla.
2. **FROM**: Especifica la tabla de la cual se están seleccionando los datos.
3. **WHERE**: Filtra los resultados basándose en una condición.
4. **AND**: Combina condiciones que deben cumplirse ambas.
5. **OR**: Combina condiciones donde solo una debe cumplirse.
6. **IN**: Especifica múltiples valores posibles para una columna.
7. **NOT**: Excluye registros que cumplan una condición.
8. **BETWEEN**: Filtra datos dentro de un rango de valores.
9. **DISTINCT**: Devuelve solo valores únicos.
10. **COUNT**: Cuenta el número de filas que cumplen una condición.
11. **CONCAT**: Combina valores de varias columnas en una sola columna.
12. **AS**: Renombra una columna o tabla temporalmente en la consulta.
13. **LIMIT**: Restringe el número de filas devueltas.
14. **OFFSET**: Salta un número de filas especificado antes de empezar a devolver filas.
15. **ORDER BY**: Ordena los resultados por una o más columnas.
16. **TOP**: Limita la cantidad de resultados devueltos.
17. **MAX**: Devuelve el valor máximo de una columna numérica.
18. **MIN**: Devuelve el valor mínimo de una columna numérica.
19. **IS NULL**: Filtra registros donde el valor de una columna es `NULL`.
20. **IS NOT NULL**: Filtra registros donde el valor de una columna no es `NULL`.
21. **SUM**: Suma todos los valores de una columna numérica.
22. **AVG**: Calcula el promedio de los valores de una columna numérica.
23. **GROUP BY**: Agrupa filas que tienen los mismos valores en columnas especificadas.
24. **HAVING**: Filtra resultados después de aplicar una cláusula **GROUP BY**, se utiliza para aplicar condiciones en funciones agregadas.
25. **ASC**: Ordena los resultados en orden ascendente.
26. **DESC**: Ordena los resultados en orden descendente.
27. **LIKE**: Filtra resultados que coinciden con un patrón específico. Utilizado con comodines como `%` y `_`.
28. **UNION**: Combina los resultados de dos o más consultas **SELECT** eliminando duplicados.
29. **UNION ALL**: Combina los resultados de dos o más consultas **SELECT** sin eliminar duplicados.
30. **EXISTS**: Verifica si una subconsulta devuelve filas; devuelve verdadero si al menos una fila cumple la condición.
31. **SUBQUERY**: Una consulta dentro de otra consulta (se utiliza con operadores como `=` o en **EXISTS**).
32. **CREATE VIEW**: Crea una vista virtual basada en el resultado de una consulta **SELECT**.
33. **DROP VIEW**: Elimina una vista existente.
34. **CASE**: Estructura condicional que permite devolver valores diferentes basados en condiciones.
35. **EXISTS con SUBQUERY**: Verifica la existencia de filas en una subconsulta antes de devolver resultados.
36. **SUM**: Calcula la suma de valores en una columna (ya estaba en la lista original).
37. **MIN**: Devuelve el valor mínimo de una columna (ya estaba en la lista original).
38. **WHERE NOT**: Filtra resultados excluyendo un valor específico.

## Comandos de join

1. **ON**: Define la condición para unir tablas, normalmente usando una columna común entre ambas.
2. **INNER JOIN**: Devuelve las filas que tienen coincidencias en ambas tablas basadas en la columna común.
3. **LEFT JOIN**: Devuelve todas las filas de la tabla de la izquierda y las coincidencias de la tabla de la derecha. Si no hay coincidencias, devuelve `NULL` para la tabla de la derecha.
4. **RIGHT JOIN**: Devuelve todas las filas de la tabla de la derecha y las coincidencias de la tabla de la izquierda. Si no hay coincidencias, devuelve `NULL` para la tabla de la izquierda.
5. **FULL OUTER JOIN**: Devuelve todas las filas cuando hay coincidencias en cualquiera de las tablas, y si no hay coincidencia, devuelve `NULL` en la parte que no coincide.
6. **CROSS JOIN**: Combina todas las filas de dos tablas, creando un producto cartesiano (cada fila de la primera tabla se combina con cada fila de la segunda tabla).
7. **SELF JOIN**: Une una tabla consigo misma, tratándola como si fueran dos tablas distintas para comparar o unir filas dentro de la misma tabla.


## Comandos de database y table

1. **CREATE DATABASE**: Crea una nueva base de datos.
2. **CREATE DATABASE IF NOT EXISTS**: Crea una nueva base de datos solo si no existe ya.
3. **SHOW DATABASES**: Lista todas las bases de datos en el sistema.
4. **USE**: Selecciona una base de datos para ser utilizada en la sesión actual.
5. **CREATE TABLE**: Crea una nueva tabla dentro de la base de datos seleccionada, especificando columnas y sus tipos de datos.
6. **CREATE TABLE IF NOT EXISTS**: Crea una tabla solo si no existe ya.
7. **DROP DATABASE**: Elimina una base de datos del sistema.
8. **DROP TABLE**: Elimina una tabla de la base de datos.
9. **ALTER TABLE**: Modifica una tabla existente agregando, renombrando o eliminando columnas, o alterando la estructura de la tabla.
10. **BACKUP DATABASE**: Crea una copia de seguridad de la base de datos en un archivo especificado.
11. **BACKUP LOG**: Hace una copia de seguridad del registro de transacciones de una base de datos, permitiendo la recuperación a un punto específico en el tiempo.
12. **RESTORE DATABASE**: Restaura una base de datos desde un archivo de copia de seguridad.

## Comandos de insert, update y delete

1. **INSERT INTO**: Se utiliza para insertar nuevas filas en una tabla de base de datos.
2. **VALUES**: Especifica los valores que se insertarán en las columnas de la tabla.
3. **UPDATE**: Se utiliza para modificar registros existentes en una tabla de base de datos.
4. **SET**: Especifica las columnas y los nuevos valores que se utilizarán para actualizar filas.
5. **SELECT INTO**: Se utiliza para copiar datos de una tabla a otra.
6. **INSERT INTO SELECT**: Se utiliza para copiar registros de una tabla a otra tabla existente.
7. **DELETE**: Se utiliza para eliminar filas de una tabla de base de datos.
8. **TRUNCATE**: Elimina todas las filas de una tabla pero mantiene la estructura de la tabla.

## Comandos de Constraints

1. **NOT NULL**: Los valores no pueden ser nulos.
2. **UNIQUE**: Los valores no pueden coincidir con ningún valor ya existente.
3. **PRIMARY KEY**: Se utiliza para identificar de manera única una fila.
4. **FOREIGN KEY**: Hace referencia a una fila en otra tabla.
5. **CHECK**: Valida una condición para los nuevos valores.
6. **DEFAULT**: Establece un valor predeterminado si no se proporciona uno.
7. **CREATE INDEX**: Se utiliza para acelerar el proceso de lectura al consultar una columna.

## Extras

### Numéricos
1. **BIT(x)**: puede almacenar valores de x bits. x puede ir de 1 a 64.
2. **TINYINT**: puede almacenar números del rango -128 a 127.
3. **SMALLINT**: puede almacenar números del rango -32768 a 32767.
4. **MEDIUMINT**: puede almacenar números del rango -8,388,608 a 8,388,607.
5. **INT**: puede almacenar números del rango -2,147,483,648 a 2,147,483,647.
6. **BIGINT**: puede almacenar números del rango -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807.
7. **DECIMAL(x, y)**: puede almacenar números decimales de un total de x dígitos (máximo 65), de los cuales y dígitos (máximo 30) son asignados después del punto decimal.

### Cadenas de texto y binarios
1. **CHAR(x)**: puede almacenar caracteres de longitud fija (máximo 8000 caracteres).
2. **VARCHAR(x)**: puede almacenar caracteres hasta una longitud dada (máximo 8000 caracteres).
3. **BINARY(x)**: puede almacenar cadenas binarias de longitud fija.
4. **VARBINARY(x)**: puede almacenar cadenas binarias hasta una longitud dada.
5. **TINYTEXT**: puede almacenar hasta 255 caracteres.
6. **TEXT(x)**: puede almacenar caracteres hasta el límite dado (máximo 65,535 bytes).
7. **MEDIUMTEXT**: puede almacenar hasta 16,777,215 caracteres.
8. **LONGTEXT**: puede almacenar hasta 4,294,967,295 caracteres.
9. **BLOB(x)**: puede almacenar objetos binarios grandes hasta 65,535 bytes.
10. **MEDIUMBLOB**: puede almacenar objetos binarios grandes hasta 16,777,215 bytes.
11. **LONGBLOB**: puede almacenar objetos binarios grandes hasta 4,294,967,295 bytes.

### Fecha y hora
1. **DATE**: puede almacenar fechas en el formato YYYY-MM-DD, desde 1000-01-01 hasta 9999-12-31.
2. **DATETIME**: puede almacenar fecha y hora en el formato YYYY-MM-DD hh:mm:ss.
3. **TIME**: puede almacenar solo la hora en el formato hh:mm:ss, desde -838:59:59 hasta 838:59:59.
4. **YEAR**: puede almacenar años en formato de 4 dígitos, en el rango de 1901 a 2155.
5. **TIMESTAMP**: puede almacenar timestamps desde la zona horaria actual a UTC.