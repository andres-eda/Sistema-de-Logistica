#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
void inicializar_pila(PilaDeshacer *p) {
    //establece la cima de la pila como nula 
    p->tope = NULL;
    //inicia el contador total de eleentos en cero 
    p->total = 0;
}
