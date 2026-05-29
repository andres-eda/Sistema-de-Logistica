void liberar_historial(Historial *h) {
    NodoHistorial *actual = h->cabeza;
    NodoHistorial *siguiente;
    while (actual != NULL) {
        siguiente = actual->siguiente;
        free(actual);
        actual = siguiente;
    }
    h->cabeza = NULL;
    h->total_entregas = 0;
}

