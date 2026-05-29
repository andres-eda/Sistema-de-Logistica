    /* Aqui hay que deshacer la ultima asignacion */
void deshacer_asignacion()
    Asignacion deshecha;
    if (desapilar_asignacion(&pila, &deshecha)) {
        printf("Deshecho: paquete %d (%s) del camion %d\n",
               deshecha.paquete.id, deshecha.paquete.destino, deshecha.id_camion);
        printf("Asignaciones restantes: %d\n\n", pila.total);
    }
}
    