#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
int apilar_asignacion(PilaDeshacer *p, Paquete paquete, int id_camion) {
//reserva de memoria dinamica para el nuevo nodo de la pila
    NodoPila *nuevo = (NodoPila *)malloc(sizeof(NodoPila));
    if (nuevo == NULL) {
        //imprime un mensade de eeror si el sistema se quedo sin memoria RAM
        puts("ERROR 1. Error en memoria dinamica");
        return 0;//retorna 0 para indicar que fallo la operacion
    }
    //copia los datos del paquete al nuevo nodo que se acaba de crear 

    nuevo->asignacion.paquete = paquete;
    //guarda el ID del camion en el nuevo nodo para tener el registro completo
    nuevo->asignacion.id_camion = id_camion;
    //conecta el nuevo nodo con el resto de la pila
    nuevo->siguiente = p->tope;  /* el nuevo apuntaría al tope actual */
    //actuaiza el indicador de la cima de la pila para que sea este nuevo nodo 
    p->tope = nuevo;             /* entonces el nuevo es ahora el tope */
    //incrementa el contador total de elementos guardados en la pila
    p->total++;
    //retorna 1 indicando que el guardado en el historial fue exitoso
    return 1;
}
