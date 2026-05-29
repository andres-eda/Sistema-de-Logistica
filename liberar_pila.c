void liberar_pila(PilaDeshacer *p) {
    NodoPila *actual = p->tope;
    NodoPila *siguiente;
    while (actual != NULL) {
        siguiente = actual->siguiente;
        free(actual);
        actual = siguiente;
    }
    p->tope = NULL;
    p->total = 0;
}
