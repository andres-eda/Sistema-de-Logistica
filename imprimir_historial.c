void imprimir_historial(Historial *h) {
    if (historial_vacio(h)) {
        printf("El historial esta vacio. No hay entregas registradas.\n");
        return;
    }

    printf("=== HISTORIAL DE ENTREGAS (%d) ===\n", h->total_entregas);
    NodoHistorial *actual = h->cabeza;
    int i = 1;
    while (actual != NULL) {
        printf("%d) Paquete ID %d -> Destino: %s | Peso: %.2f kg | Camion ID: %d\n",
               i,
               actual->entrega.paquete.id,
               actual->entrega.paquete.destino,
               actual->entrega.paquete.peso_kg,
               actual->entrega.id_camion);
        actual = actual->siguiente;
        i++;
    }
    printf("===================================\n");
}
