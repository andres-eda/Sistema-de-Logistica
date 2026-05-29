#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
//Declaracion de bibliotecas

#include"clean.c"
#include"VisualizarColaPac.c"
#include"regisPacAr.c"
#include"regisPacMan.c"
#include"menuRegisPac.c"

/* Funciones de historial */
#include "inicializar_historial.c"
#include "registrar_entrega.c"
#include "imprimir_historial.c"
#include "liberar_historial.c"
#include "historial_vacio.c"
/* Funciones de pila */
#include "inicializar_pila.c"
#include "apilar_asignacion.c"
#include "desapilar_asignacion.c"
#include "pila_vacia.c"
#include "liberar_pila.c"

/* Funciones de camiones */
#include "insertarCamion.c"
#include "rotarCoches.c"
#include "asignarPaqueteACoche.c"
#include "creacion_camiones.c"
#include "menu_asig_cam.c"
#include "menu_asig_pac.c"

/* Deshacer */
#include "deshacer_asignacion.c"

//Menú
void menu()
{
    //Declaracion de variables 
    int op; 
    NodoCamion* listaCamiones = NULL; 
    //Algoritmo 
    do 
    {
        
        printf("#####Bienvenido al servicio de paqueteria#####\n");
        printf("Opcion 1: Registrar paquetes\n");
        printf("Opcion 2: Asignacion de paquetes\n");
        printf("Opcion 3: Imprimir lista de entregas\n");
        printf("Opcion 4: Reportes de estado\n");
        printf("Opcion 5: Salir del programa\n");
        
        if(scanf("%d", &op)==1)
        {
            switch(op)
            {
                case 1:          
                menuRegisPac();
                break;

                case 2:
                menu_asig_cam();
                break; 

                case 3:
               
                break;

                case 4: 
                
                break; 

                case 5: 
                printf("Usted ha salido del programa con exito");
                break;

                default: 
                puts("Inserte un digito valido");
            }
        }
        else 
        {
            clean();
        }
    }while (op!=5); 
}
