#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
void liberar_historial(Historial *h) {
    //punteros auxiliares para recorrer la lista sin perdeer la referencia 
    NodoHistorial *actual = h->cabeza;
    NodoHistorial *siguiente;
    //recorre todos los nodos de la lista hasta llegar al final 
    while (actual != NULL) {
        //guarda el siguiente nodo antes de borrar el actual 
        siguiente = actual->siguiente;
        //libera la memoria RAM del nodo actual
        free(actual);
        //avanza al siguiente nodo para continuar el ciclo 
        actual = siguiente;
    }
    //reincia los valores del historial para dejarlos vacio y seguro 
    h->cabeza = NULL;
    h->total_entregas = 0;
}

