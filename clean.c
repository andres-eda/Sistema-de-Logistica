#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
void clean ()
{
    //Declaracion de variables 
    int a; //variable para almanecar temporalmente cada caracter extraido 
    //Algoritmo
    //imprime un mensake en pantalla avisando al usuario que ingreso un formato invalido 
    puts("Tipo de dato erroneo"); 
    //ciclo while que lee y descarta caracter por caracter del buffer 
    //el ciclo se repite vaciando la basura hasta encontrar el salto de linea
    while((a=getchar())!='\n');    
}
