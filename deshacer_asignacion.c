#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
/* Aqui hay que deshacer la ultima asignacion */
void deshacer_asignacion(){
    //variable temporal para guardar los datos que se van a extraer 
    Asignacion deshecha;
    //llama a desapilar; si retorna 1 (exito), ejecuta el bloque 
    if (desapilar_asignacion(&pila, &deshecha)) {
        //muestra en consola que paquete y de que camion se acaba de revertir 
        printf("Deshecho: paquete %d (%s) del camion %d\n",
               deshecha.paquete.id, deshecha.paquete.destino, deshecha.id_camion);
        //muestra cuantos movimientos quedan guardados en el historial 
        printf("Asignaciones restantes: %d\n\n", pila.total);
    }
}
    
