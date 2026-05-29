//Declaracion de bibliotecas

#include"clean.c"
#include"VisualizarColaPac.c"
#include"regisPacAr.c"
#include"regisPacMan.c"
#include"menuRegisPac.c"
#include"apilar_asigancion.c"
#include"asignarPaqueteACpche.c"
#include"clean.c"
#include"creacion_camiones"
#include"desapilar_asignacion.c"
#include"deshacer_asignacion.c"
#include"historial_vacio.c"
#include"imprimir_historial.c"
#include"inicializar_pila.c"
#include"inicializar_historial"
#include"insertarCamion.c"
#include"liberar_historial.c"
#include"main.c"
#include"menu.c"
#include"menu_asig_cam.c"
#include"paquetes.csv"
#include"pila_vacia.c"
#include"registrar_entrega.c"
#include"rotarCoches.c"




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
