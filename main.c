#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Declaracion de estructuras 

//Nodo para paquetes 
typedef struct nodoc{
   int id; 
   float peso;
   char direccion[50]; 
   struct nodoc *next; 
   struct nodoc *prev; 
}nodoc;

//Estructura entrega
typedef struct {
   Paquete paquete;
   int id_camion;     
} Entrega;

// El nodo de la lista simple 
typedef struct NodoHistorial {
   Entrega entrega;
   struct NodoHistorial *siguiente;
} NodoHistorial;

/* Estructura del historial completo */
typedef struct {
   NodoHistorial *cabeza;
   int total_entregas;
} Historial;

/* Una asignacion para saber que paquete fue puesto en que camion */
typedef struct {
   Paquete paquete;
   int id_camion;
}Asignacion;

/* El nodo de la pila */
typedef struct NodoPila {
   Asignacion asignacion;
   struct NodoPila *siguiente;
}NodoPila;

/* La estructura de la pila */
typedef struct {
   NodoPila *tope;
   int total;
}PilaDeshacer;



//Variables globales 
int contPac=1; 
int contAr=0;
PilaDeshacer pila;
Historial historial;

//Listas 
nodoc *HeadC=NULL; 
nodoc *TailC=NULL;

#include "menu.c"

int main(void)
{
   menu(); 
   return 0; 
}
