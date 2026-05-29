void creacion_camiones(NodoCamion **listaCamiones)
{
    //Declaracion de variables 
    int i;
    //Algoritmo 
    for(i=0; i<5; i++)
    {
        Camion transporte = {i+1, (i+1)*100, 0.0};
        insertarCamion(&listaCamiones, transporte); 
    }
}
        
