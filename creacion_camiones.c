void creacion_camiones()
{
    //Declaracion de variables 
    int i;
    int kg=1;  
    

    //Algoritmo 
    for(i=0; i<5; i++)
    {
        Camion transporte = {suma, kg*100, 0.0 };
        suma++;
        insertarCamion(&listaCamiones, transporte);
    }
}
