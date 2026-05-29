void asignarPaqueteACoche(void* cola, NodoCamion** camionActual, void* topePila) {
    if (cola == NULL) {
        printf("Alerta: Estructura de cola no inicializada.\n");
        return;
    }
    if (*camionActual == NULL) {
        printf("Error: No se han registrado camiones en el sistema.\n");
        return;
    }

    printf("[LOGÍSTICA] Módulo listo. Conectando asignación con el menú principal...\n");
}