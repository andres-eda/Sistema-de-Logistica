#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
int pila_vacia(PilaDeshacer *p) {
    //retorna si el tope es NULL indicando que no hay elementos
    return (p->tope == NULL);
}
