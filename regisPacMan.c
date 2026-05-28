//Registro de paqueteres manualmente
int regisPacMan()
{
    //Declaracion de variables 
    
    //Algoritmo
    nodoc *nuevo=(nodoc*)malloc(sizeof(nodoc)); 
    if(nuevo==NULL)
    {
        puts("ERROR 1. Error en memoria dinamica");
        return 1; 
    }
    getchar();
    puts("Dirección del paquete: "); 
    fgets(nuevo->direccion, 50, stdin);
    nuevo->direccion[strcspn(nuevo->direccion, "\n")] = '\0';
    printf("Ingresa el peso:   ");
   if(scanf(" %f", &nuevo->peso)==1){
        puts("");       
        //Guardado el paquete en una cola. 
        if(HeadC==NULL && TailC==NULL)
        {
            nuevo->next=NULL;
            nuevo->prev=NULL;
            HeadC=nuevo;
            TailC=nuevo; 
        }else
        {
            nuevo->prev=TailC; 
            TailC->next=nuevo; 
            nuevo->next=NULL;
            TailC=nuevo;
        }
        puts("Datos guardados correctamente"); 
        nuevo->id=contPac; 
        contPac++; 
        VisualizarColaPac();
        return 0; 
    }
    else
    {
        clean();
        return 1; 
    }
}
