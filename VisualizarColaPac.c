#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
extern nodoc *HeadC;
extern nodoc *TailC; 
void VisualizarColaPac()
{
    //Declaracion de variables 
    int i; //variable para controlar los ciclos for de la decoracion 
    nodoc *temp=HeadC; //puntero temporarl inicializado en la cabeza de la cola parar recorrerla 
    //Algoritmo
    //valida si la cola esta completamente vacia
    if (HeadC==NULL && TailC==NULL)
    {
        //mensaje de aviso si no hay elementos guardados 
        printf("No hay paquetes que visualizar, vuelva mas tarde"); 
         
    }
    else 
    {   
        //Se imprimen los paquetes de la cola  
        //imprime una linea divisora superior de 50 guiones bajos
        for (i = 0; i < 50; i++)
        {
            printf("_");
        }
        //imprime el titulo centrado con tabulaciones
        puts("\n\t\tCola de paquetes");
        //imprime el encabezado de la tabla alineando los textos con espacios 
        printf("%-30s %-11s %s\n", "Direccion", "Peso", "Id");
        //cicclo while para recorrer todos los nodos de la cola hasta llegar al final
        while(temp != NULL)
        {
            //imprime los datos del paquete actual respetando  la alienacion 
            printf("%-29s  %-10.2f  %d\n", temp->direccion, temp->peso, temp->id);
            //avanza el puntero temporal al siguiente no de la cola 
            temp=temp->next; 
        }
        //imprime una linea divisora inferior de los 50 guiones bajos 
        for (i = 0; i < 50; i++)
        {
            printf("_");
        }
        //salto de linea final 
        printf("\n");
    }

}
