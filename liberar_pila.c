#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
void liberar_pila(PilaDeshacer *p) {
    //punteros auxiliares para recorrer la pila sin perdes los enlaces 
    NodoPila *actual = p->tope;
    NodoPila *siguiente;
    //recorre todos los nodos de la pila desde el tope hasta el fondo 
    while (actual != NULL) {
        //guarda la referenia al siguiente nodo antes de eliminar la actual 
        siguiente = actual->siguiente;
        //libera la memoria RAM del nodo actual 
        free(actual);
        //avanza al siguiente nodo para la proxima iteracion 
        actual = siguiente;
    }
    7/reinicia la pila dejandola vacia y lista para usarse de nuevo
    p->tope = NULL;
    p->total = 0;
}
