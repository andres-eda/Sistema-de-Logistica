int desapilar_asignacion(PilaDeshacer *p, Asignacion *salida) {
    if (pila_vacia(p)) {
        return 0;
    }

    NodoPila *temp = p->tope;
    *salida = temp->asignacion;   /* aqui guardamos lo que devolvemos */
    p->tope = temp->siguiente;    /* y ahora el tope ahora es el siguiente */
    free(temp);                   /* despues liberamos el nodo viejo */
    p->total--;
    return 1;
}
