#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
void imprimir_historial(Historial *h) {
    if (historial_vacio(h)) {
        printf("El historial esta vacio. No hay registros.\n");
        return;
    }

    // Corregido: Se pasa h->total_entregas para el %d
    printf("=== HISTORIAL DE ENTREGAS (%d) ===\n", h->total_entregas); 
    
    NodoHistorial *actual = h->cabeza;
    int i = 1;

    while (actual != NULL) {
        // Corregido: Se completa la cadena de formato con los especificadores correspondientes
        printf("%d) Paquete ID: %d -> Destino: %s -> Peso: %.2f kg -> Camion ID: %d\n",
               i,
               actual->entrega.paquete.id,
               actual->entrega.paquete.destino,
               actual->entrega.paquete.peso_kg,
               actual->entrega.id_camion);
               
        actual = actual->siguiente;
        i++;
    }
    printf("=============================================\n");
}
