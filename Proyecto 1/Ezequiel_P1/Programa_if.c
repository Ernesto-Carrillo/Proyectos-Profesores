/*
Autor:Ezequiel Rodriguez
Este programa pregunta la opcion y la despliega, uso de if
fecha de elaboracion 26 de agosto de 2021
Codigo IoT
*/
#include<stdio.h>

int main(void)
{
    int opcion;
    printf("Selecciona un numero del siguiente menu\n");
    printf("MENU\n");
    printf("1. Opcion 1\n");
    printf("2. Opcion 2\n");
    printf("3. Opcion 3\n");

    scanf("%d",&opcion); 

    if (opcion==1)
    {
        printf("Has seleccionado la opcion 1\n");
    }
    
    if (opcion==2)
    {
        printf("Has seleccionado la opcion 2\n");
    }
    
    if (opcion==3)
    {
        printf("Has seleccionado la opcion 3\n");
    }
    
    if(opcion!=1 && opcion!=2 && opcion!=3)
    {
    printf("Has seleccionado la opcion incorrecta\n");
    }
    
    return (0);
}