#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
void inicializar_historial(Historial *h) {
    //establece el inicio de la lista como nulo 
    h->cabeza = NULL;
    //inicia el contador total de entregas registradas en cero 
    h->total_entregas = 0;
}
