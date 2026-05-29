int apilar_asignacion(PilaDeshacer *p, Paquete paquete, int id_camion) {
    NodoPila *nuevo = (NodoPila *)malloc(sizeof(NodoPila));
    if (nuevo == NULL) {
        puts("ERROR 1. Error en memoria dinamica");
        return 0;
    }

    nuevo->asignacion.paquete = paquete;
    nuevo->asignacion.id_camion = id_camion;
    nuevo->siguiente = p->tope;  /* el nuevo apuntaría al tope actual */
    p->tope = nuevo;             /* entonces el nuevo es ahora el tope */
    p->total++;
    return 1;
}