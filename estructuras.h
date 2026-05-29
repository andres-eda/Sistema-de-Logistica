#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodoc {
   int id; 
   float peso;
   char direccion[50]; 
   struct nodoc *next; 
   struct nodoc *prev; 
} nodoc;

typedef struct {
    int id;
    char destino[100];
    float peso_kg;
} Paquete;

typedef struct {
   Paquete paquete;
   int id_camion;     
} Entrega;

typedef struct NodoHistorial {
   Entrega entrega;
   struct NodoHistorial *siguiente;
} NodoHistorial;

typedef struct {
   NodoHistorial *cabeza;
   int total_entregas;
} Historial;

typedef struct {
   Paquete paquete;
   int id_camion;
} Asignacion;

typedef struct NodoPila {
   Asignacion asignacion;
   struct NodoPila *siguiente;
} NodoPila;

typedef struct {
   NodoPila *tope;
   int total;
} PilaDeshacer;

typedef struct {
    int id;                
    float capacidad_kg;    
    float carga_actual_kg; 
} Camion;

typedef struct NodoCamion {
    Camion dato;
    struct NodoCamion* siguiente;
} NodoCamion;

// Declaramos las globales como extern para que todos las vean
extern nodoc *HeadC;
extern nodoc *TailC;
extern PilaDeshacer pila;
extern Historial historial;

#endif
