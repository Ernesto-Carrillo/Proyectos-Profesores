/*Programa para una calculadora basica, suma, resta, mutiplicacion y division
Hecho por Ezequiel Rodriguez R
Fecha:26 de agosto de 2021
Diplomado IoT
*/

#include<stdio.h>


int numero1, numero2, resultado;

int main(void)

{
    printf("introduce 2 numeros y da enter despues de cada uno");
    scanf("%d",&numero1);
    scanf("%d",&numero2);
int opcion;
    printf("Selecciona un numero del siguiente menu\n");
    printf("MENU\n");
    printf("Opcion 1, suma\n");
    printf("Opcion 2, restan\n");
    printf("Opcion 3, mutilplicacion\n");
    printf("Opcion 4, division\n");

    scanf("%d",&opcion); 

    if (opcion==1)
    {
        resultado=numero1+numero2;
        printf("resultado\n");
    }
    
    if (opcion==2)
    {
        resultado=numero1-numero2;
        printf("resultado\n");
    }
    
    if (opcion==3)
    {
        resultado=numero1*numero2;
        printf("Has seleccionado la opcion 3\n");
    }
    if(opcion==4)
    {
    resultado=numero1/numero2;
    }

    if(opcion!=1 && opcion!=2 && opcion!=3 && opcion!=4) 
    {
        printf("Has seleccionado la opcion incorrecta\n");
    
    }
    printf("%d\n",resultado);
    return (0);
}