#include <iostream>
#include <thread>   // para usar los theread
#include <vector>   // para usar vector
#include <mutex>    // para usar mutex
#include <chrono>   // para usar lo del tiempo
#include <barrier>  // para usar barrier

// Mutex para proteger la salida en la consola
std::mutex console_mutex; // Mia. Es para que las tareas no impriman a la vez

// Barrera para sincronizar las tareas
std::barrier sync_point(3); // Mia. Tiene que esperar a las 3 tareas para seguir ejecutando el resto de la tarea
// Mia. sync_point(3) es una instancia de barrier


// Función que simula una tarea del sistema
void perform_task(int id) {
    {
        // Bloqueo para asegurar que la salida no se mezcle
        std::lock_guard<std::mutex> lock(console_mutex); // Mia. Esto hace que solo una tarea pueda acceder a la consola
        // std::mutex es un tipo de dato usado en la clase lock_guard, variable lock(console_mutex)

        std::cout << "Tarea " << id << " está realizando trabajo inicial...\n"; // Mia. Imprime porque tiene acceso a la terminal
    }

    // Simula trabajo con un retardo
    std::this_thread::sleep_for(std::chrono::milliseconds(1000 * id)); // Mia. Simula la duracion de una tarea

    {
        // Bloqueo para asegurar que la salida no se mezcle
        std::lock_guard<std::mutex> lock(console_mutex); // Mia. Esto hace que solo una tarea pueda acceder a la consola.
        std::cout << "Tarea " << id << " alcanzó el punto de sincronización.\n";
    }

    // Sincronización en la barrera
    sync_point.arrive_and_wait(); // Mia. Espera a que se realicen todas las tareas, luego continuan con las tareas.
    // metodo de sync_point

    {
        // Bloqueo para asegurar que la salida no se mezcle
        std::lock_guard<std::mutex> lock(console_mutex); // Mia. Esto hace que solo una tarea pueda acceder a la consola
        std::cout << "Tarea " << id << " continúa con el trabajo final.\n";
    }

    // Simula trabajo adicional con un retardo
    std::this_thread::sleep_for(std::chrono::milliseconds(1000 * id));

    {
        // Bloqueo para asegurar que la salida no se mezcle
        std::lock_guard<std::mutex> lock(console_mutex); // Mia. Esto hace que solo una tarea pueda acceder a la consola
        std::cout << "Tarea " << id << " ha completado el trabajo.\n";
    }
}

int main() {
    const int NUM_TASKS = 3; // Número de tareas a ejecutar

    // Crea y lanza los hilos para ejecutar las tareas
    std::vector<std::thread> threads; // Mia. "Almacena" los hilos creados
    for (int i = 1; i <= NUM_TASKS; ++i) { // Mia. 1 a 3 tareas
        threads.push_back(std::thread(perform_task, i)); // Mia. se agrega el hilo al "almacenamiento". Se asigna una tarea a un hilo. i es el numero del hilo
        // push_back metodo de variable threads de la clase vector
    }

    // Espera a que todas las tareas terminen
    for (auto& th : threads) {
        th.join(); // Mia. Hace que la funcion main espere a que se terminen todas las tareas. un for? con multitarea? primero espera a la tarea 1? luego a la 2?
    }

    std::cout << "Todas las tareas han completado su ejecución.\n"; // Mia. imprime que todas las tareas han terminado

    return 0; // Mia. Concluyó con éxito.
}
