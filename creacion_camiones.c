#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
void creacion_camiones(NodoCamion **listaCamiones)
{
    //Declaracion de variables 
    int i; //variable de control para iterar el ciclo for 
    //Algoritmo 
    //ciclo for que se repite 5 veces para dar de alta 5 unidades automaticas
    for(i=0; i<5; i++)
    {
        //crea una estructura tipo camion temporar 
        Camion transporte = {i+1, (i+1)*100, 0.0};
        insertarCamion(&listaCamiones, transporte); 
        //manda el camion reccien creado a la funcion insertarCamion 
        //para que se guarde y se enlace dnetro de la lista circular
    }
}
        
