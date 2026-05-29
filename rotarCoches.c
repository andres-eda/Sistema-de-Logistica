void rotarCoches(NodoCamion** cabeza) {
    if (*cabeza != NULL) {
        *cabeza = (*cabeza)->siguiente; 
        printf("Turno rotado de forma manual. Camion activo cambiado.\n");
    } else {
        printf("Error: No existen camiones registrados en el sistema para rotar.\n"); 
    }
}