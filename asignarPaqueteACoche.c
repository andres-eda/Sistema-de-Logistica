#include <stdio.h>
#include <stdlib.h> 
void asignarPaqueteACoche(void* cola, NodoCamion** camionActual, void* topePila) {
    //validacion de seguridad verifica si la estructura de la cola existe en memoria
    if (cola == NULL) {
        //muestra una alerta indicando que no se ha creado la cola de espera 
        printf("Alerta: Estructura de cola no inicializada.\n");
        return;
    }
    //validacion de seguridad comprueba que la lista circular tenga al menus un camion 
    if (*camionActual == NULL) {
        //muestra un eeror si el usuario intenta asignar carga sin tener flota displonible 
        printf("Error: No se han registrado camiones en el sistema.\n");
        return; //termina la ejecucion d ela funcion anticipadamente 
    }
    //mensaje de trazabilidad confirma en cnsola que las validaciones pasaron 
    //el modulo esta listo para interactuar con el menu

    printf("[LOGÍSTICA] Módulo listo. Conectando asignación con el menú principal...\n");
}
