# **Tarea 1**

## Parte Teórica

1. Diferencias entre los lenguajes copilados e interpretados.

    En el lenguaje compilado el código fuente se pasa a código ejecutable antes de correr el programa. En cambio en el lenguaje interpretado el codigo fuente se ejecuta linea por linea mientras se corre el programa.

    - <span style="color: lightskyblue;">C++</span> es un lenguaje <u>copilado</u>.
    - <span style="color: green;">Python</span> es un lenguaje <u>interpretado</u>.

2. Concepto de tipos de datos y clasificaciones.
    
    Los tipos define el tipo de valor que se puede almacenar y que operaciones que se permiten con ese tipo de dato en específico. En C++ existen 3 tipos de datos: Primarios, Derivados y Definidos por usuario.

    - Primarios:
        - Integer
        - Boolean
    - Derivados:
        - Function
        - Array
    - Definidos por usuario
        - Class
        - Structure
    
3. Concepto de linker en lenguaje de programación copilado.

    El linker es una herramienta en el proceso de compilado en lenguajes de progración compilados.

    Función principal:

    Es combinar módulos de código cuando se termina la etapa de generación de archivos .obj. Esto mediante la vinculacion de definiciones en los archivos objeto o bibliotecas, asignacion de direcciones de memoria e incluye el codigo de bibliotecas o referencias de bibliotecas dinamicas.

    Importancia:

    Facilita la union del codigo que es separado en diferentes archivos en una etapa anterior. Tambien optimiza el codigo descartando partes no usadas en el codigo y facilita el uso de bibliotecas porque no incluye todo el codigo fuente de esta.

4. Diferencia entre los operadores "=" y "==".

    El operador "=" es usado para asignar o declarar un valor a una variable. Por otra parte, el operador "==" es usado para comparar dos valores explicitos o variable.

    Ejemplo "=":
    - int var = 23;

    Ejemplo "==":
    - if (var == 3)

5. Código.
    ```
    #include <iostream>

    int main() {
        int sum = 0;
        int result;

        for (int i = 1; i < 10; ++i) {
            sum += i;
            result = (i % 3 == 0) ? sum : 0;
            std::cout << result << std::endl;
        }

        return 0;
    }
    ```

    En la iteracion 7 y 9 del ciclo se imprimen los valores 0 y 45 respectivamente.
    
    El codigo suma el indice "i" a la variable "sum".

    Luego se compara el modulo del indice entre 3 con 0 (i % 3 == 0).

    Si el modulo da un valor diferente de 0, se guarda un 0 en la variable "result", sino se guarda el valor de la variable "sum".

    Por último, imprime la variable "result" en cada iteración del bucle for hasta que el índice "i" llegue a menor que 10(se ejecutan 9 iteraciones).

6. Proceso de pasar argumentos a la función principal y el primer elemento de "argv[]".

    Para pasar argumentos a la función principal se agregan entradas de argumentos en la función main. Luego, al momento de ejecutar el programa se ingresan los valores de los argumentos.
    
    El primer elemento de "argv[]" contiene el nombre del programa por lo cual el vector siempre tendra almenos un argumento.

7. Diferencia entre inicializar y declarar una variable .

    Declarar: Reservar espacio, pero sin asignar un valor.

    Inicializar: Asignar un valor inicial a la variable reservada.

8. Modificadores en C++.

    Modifican el tamaño de almacenamiento o rango de valores que los tipos de dato pueden guardar.

9. Sobrecarga de funciones en C++:

    Permite definir múltiples funciones con el mismo nombre pero diferentes tipos de datos en sus parámetros o cantidad de parametros.

    Ejemplo:

    ```
    int sum(int a, int b);
    float sum(float a, float b);
    int sum(int a)
    float sum(float b)
    ```

    Para utilizar a una función en especifico, se llama a la funcion que se necesita poniendo los argumentos que se requieren de la funcion que se quiere usar (Tipo de dato y cantidad de parametros).

    Ejemplo:

    ```
    int sum(4);
    ```

    Esto utiliza la funcion "sum" que acepta un parametro y un valor de tipo entero.

10. Diferencia entre variable local y variable estatica.

    Variable local: Su alcance es solo dentro de la funcion donde se declara, mientras se ejecuta ese funcion.
    Variable estática: Su alcance es solo dentro de la funcion donde se declara, desde que se utiliza por primera vez la funcion hasta que finaliza el programa.

11. Type casting

    El type casting es el proceso de convertir una variable de un tipo de dato a otro.

    Conversión implícita. Ejemplo:
    ```
    int num_int = 9;
    double num_double = num_int;
    ```

    Conversión explícita estilo C. Ejemplo:
    ```
    double num_double = 3.56;
    int num_int = (int)num_double;
    ```

    Conversión explícita estilo función. Ejemplo:
    ```
    double num_double = 3.56;
    int num_int = int(num_double);
    ```

12. Diferencia entre "do-while" y "while"

    El "do-while" se ejecuta al menos una vez, pero "while" se puede no ejecutar si la condición es falsa desde el principio.

13. Archivos ".hpp", ".cpp" y "main.cpp"

    Es utili dividir el codigo en diferentes archivos para organización, la reutilización del código, la facilidad de mantenimiento, y la optimización del tiempo de compilación.

    - .hpp: Contienen las declaraciones de funciones, clases, constantes, y variables que se usan en los archivos ".cpp".
    - .cpp: Contienen la implementación de las funciones, métodos y cualquier lógica detallada que se declaró en los archivos ".hpp".
    - main.cpp: Es donde se lleva a cabo la ejecución del programa llamando a las funciones y métodos que se implementaron en otros archivos.

14. Sentencia "goto".

    La sentencia "goto" salta a una etiqueta arbitraria en el código. Es considerada una mala practica porque se dificulta seguir el flujo del programa, el mantenimiento es complicado, es propenso a errores y rompe la estructura del código. Las alternativas son bucles, estructuras condicionales, sentencias de control o funciones.

15. Directiva "#ifndef".

    Es una preinstrucción para el preprocesador que se utiliza para prevenir la inclusión múltiple de un archivo de encabezado. Esto es importante para evitar errores de compilación, problemas con la definición múltiple de variables, funciones o clases, mejora del tiempo de compilación, claridad del codigo y mantenimiento

16. Punteros.

    Un puntero es una variable que almacena la dirección de memoria de otra variable. Es util para el acceso directo a la memoria, paso de parámetros por referencia, estructuras dinámicas de datos, asignación dinámica de memoria y punteros a funciones.

    Declaracion e inicializacion:

    ```
    int variable = 10;
    int* ptr = &variable;
    ```

17. Parámetros por valor, por referencia y por puntero.

    Por valor: Se hace una <u>copia del valor</u> de la variable original y los cambios no afectan al valor de la variable original.

    Por referencia: Se pasa la <u>variable</u> original directamente, permitiendo modificar el valor de la variable original desde la función.
    
    Por puntero: Se pasa la <u>dirección</u> de la variable original, permitiendo modificarla y acceder a la memoria de manera explícita.

18. Punteros y arreglos.

    Cuando se usa un puntero para apuntar a un arreglo el puntero apunta a la dirección de memoria del primer elemento de arreglo.

    Para acceder a los demas elementos del arreglo se puede utilizar la sintaxis de-referencia, en el cual se puede recorrer el arreglo avanzando posiciones en la memoria. Ejemplo: *(ptr + i)

19. Operador "->" en punteros y beneficios

    El operador "->" se utiliza para acceder a miembros de una estructura o clase a través de un puntero a dicha estructura o clase.

    Beneficios:

    - Acceso a miembros a través de punteros.
    - Simplicidad y legibilidad.
    - Beneficio de la notación más clara.
    - Consistencia en el uso de punteros.

20. Punteros dobles, triples, etc.

    Los punteros dobles, triples, etc. se crean cuando se crea un puntero que apunta a la direccion en la que se guarda la direccion de otro puntero o una variable.

    Una aplicacion de punteros dobles, triples, etc. es bases de datos en el que se manejan estructuras de datos con varias dimensiones. Estos punteros son beneficiosos para acceder y gestionar los datos.

21. Puntero "this".

    Es un puntero intrinseco que está presente en todas las funciones miembro de una clase. Esos punteros apuntan al objeto actual sobre el que se llama a la función miembro.

22. Puntero "nullptr".

    El puntero "nullptr" es una manera segura y moderna indicar que un puntero es nulo, o sea que no apunta a ninguna direccion de memoria u objeto. Esto elimina ambigüedades, mejora la seguridad y la claridad del código.

23. Funcion prototipo.

    La funcion prototipo es una <u>declaración de una función</u> sin su implementación, en esta se <u>indica el tipo</u> de retorno y <u>parámetros</u>.

24. Almacenamiento de variables locales y globales.

    Las variables locales se almacenan en la pila, existen mientras se ejecute el bloque de codigo al que pertenecen. Por otra parte, las variables globales se almacenan en la memoria estática, existen mientras se ejecute el programa.

25. Memory leak.

    En español "memory leak" significa fuga de memoria. Esto pasa cuando el programa que se esta ejecutando no libera la memoria del sistema despues de que se usa. O sea, que la memoria no esta disponible para otros procesos, lo cual puede volver la ejecucion lenta o que se bloquee.

26. Memoria dinamica

    La memoria dinamica es la memoria que se aparta o se asigna y se libera cuando se esta ejecutando el programa.

27. Memoria estatica

    La memoria estatica es la memoria que se asigna cuando se compila el programa. Ademas, la cantidad de memoria apartada no cambia durante la ejecucion del programa.
