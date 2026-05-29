void imprimir_historial(Historial *h) {
    //verifica si hay registros; si no, avisa y termina la funcion
    if (historial_vacio(h)) {
        printf("El historial esta vacio. No hay entregas registradas.\n");
        return;
    }
    //imprime el encabezado con el total de entregas 

    printf("=== HISTORIAL DE ENTREGAS (%d) ===\n", h->total_entregas);
    //puntero temporal para recorrer la lista desde elinicio 
    NodoHistorial *actual = h->cabeza;
    int i = 1; //contador para enumerar la lista en la pantalla 
    //ciclo while parar recorrer e imprimir cada nodo hasta llegar al final 
    while (actual != NULL) {
        //imprime los datos del paquete y del camion asignado 
        printf("%d) Paquete ID %d -> Destino: %s | Peso: %.2f kg | Camion ID: %d\n",
               i,
               actual->entrega.paquete.id,
               actual->entrega.paquete.destino,
               actual->entrega.paquete.peso_kg,
               actual->entrega.id_camion);
        actual = actual->siguiente; //avanza al siguiente registro
        i++;
    }
    printf("===================================\n");
}
