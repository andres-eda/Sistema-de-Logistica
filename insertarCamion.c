void insertarCamion(NodoCamion** cabeza, Camion nuevoCamion) {
    NodoCamion* nuevoNodo = (NodoCamion*)malloc(sizeof(NodoCamion));
    if (nuevoNodo == NULL) {
        printf("Error 1. Error en memoria dinámica .\n");
        return;
    }
    nuevoNodo->dato = nuevoCamion;
    
    if (*cabeza == NULL) {
        *cabeza = nuevoNodo;
        nuevoNodo->siguiente = *cabeza; 
    } else {
        NodoCamion* temp = *cabeza;
        while (temp->siguiente != *cabeza) {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevoNodo;
        nuevoNodo->siguiente = *cabeza; 
    }
}