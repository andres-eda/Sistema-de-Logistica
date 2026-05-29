void insertarCamion(NodoCamion** cabeza, Camion nuevoCamion) {
    //reserva memoria dinamica para el nuevo nodo 
    NodoCamion* nuevoNodo = (NodoCamion*)malloc(sizeof(NodoCamion));
    //verifica si hubo un error al asignar la memoria 
    if (nuevoNodo == NULL) {
        printf("Error 1. Error en memoria dinámica .\n");
        return;
    }
    //asigna los datos del camion al nuevo nodo 
    nuevoNodo->dato = nuevoCamion;
    //si la lista esta vacia, el nodo es la cabeza y apunta a si mismo 
    
    if (*cabeza == NULL) {
        *cabeza = nuevoNodo;
        nuevoNodo->siguiente = *cabeza; 
    } else {
        //si ya hay camiones, recorre la lista hasta llegar al ultimo nodo 
        NodoCamion* temp = *cabeza;
        while (temp->siguiente != *cabeza) {
            temp = temp->siguiente;
        }
        //conecta el ultimo nodo con el nuevo, y el nuevo con la cabeza para cerrar el ciclo 
        temp->siguiente = nuevoNodo;
        nuevoNodo->siguiente = *cabeza; 
    }
}
