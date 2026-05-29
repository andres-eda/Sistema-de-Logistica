#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
int registrar_entrega(Historial *h, Paquete paquete, int id_camion) {
    NodoHistorial *nuevo = (NodoHistorial *)malloc(sizeof(NodoHistorial));
    if (nuevo == NULL) {
        return 0;  /*Aqui es para error de memoria */
    }

    nuevo->entrega.paquete = paquete;
    nuevo->entrega.id_camion = id_camion;
    nuevo->siguiente = NULL;

    if (h->cabeza == NULL) {
        /* En la lista vacia el nuevo es el primero */
        h->cabeza = nuevo;
    } else {
        /* Y aca es para buscar el ultimo nodo y enganchar */
        NodoHistorial *actual = h->cabeza;
        while (actual->siguiente != NULL) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevo;
    }

    h->total_entregas++;
    return 1;
}
