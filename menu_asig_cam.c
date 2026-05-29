void menu_asig_cam() {
    //Declaración de variables
    NodoCamion* listaCamiones = NULL;
    int opcion = 0;
    //Algoritmo 
    if(listaCamiones==NULL)
        {
            creacion_camiones(); 
        }
    do {
        printf("\n=== SISTEMA DE ASIGNACION DE PAQUETES ===\n");
        printf("1. Rotar turno de camiones\n");
        printf("2. Asignar paquete\n");
        printf("3. Salir\n");
        printf("Seleccione una opcion: ");
        if(scanf("%d", &opcion)==1);
        {    
            switch(opcion) {
                case 1:
                    rotarCoches(&listaCamiones);
                    break;
                case 2:
                    asignarPaqueteACoche(NULL, &listaCamiones, NULL);
                    break;
                case 3:
                    printf("Saliendo del programa.\n");
                    break;
                default:
                    printf("Opcion invalida.\n");
            }
        } 
        else {
            clean(); 
        }   
    } while(opcion != 3);
    return 0;
}
