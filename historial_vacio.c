#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
int historial_vacio(Historial *h) {
    //retorna verdadedo solo si el inicio del historil es null 
    return (h->cabeza == NULL);
}
