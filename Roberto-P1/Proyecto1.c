/* 
Comentarios sobre el programa
Nombre del programa: Programa MENU

Autor: Roberto A. Alcántara Ramírez
Versión: 1.0
Fecha: 26 de agosto 2021
Modificado por:

Descripción del programa: Este programa ejemplificar el uso de la función IF, 
para ello se ejemplifica mediante el despliegue de un menu
*/

/* Bibliotecas utilizadas:
#include <studio.h>

/*Variables utilizadas con su tipo correspondiente*/

/* Estructura principal del programa */

int main(void)
{
    int opcion;

    printf("Menu para ejemplificar la función 'IF'\n");
    printf("\n");
    printf("Seleccione la opción de su interés:\n");
    printf("Para la opción 1, presione el número 1:\n");
    printf("Para la opción 2, presione el número 4:\n");
    printf("Para la opción 3, presione el número 6:\n");

    scanf("%d",&opcion);

    if(opcion==1)
    {
        printf("Usted ha seleccionado la opción 1");
        
    }
    
    if(opcion==4)
    {
        printf("Usted ha seleccionado la opción 2");
        
    }
    if(opcion==6)
    {
        printf("Usted ha seleccionado la opción 3");
        
    }
    if(opcion!=1 && opcion!=4 && opcion!=6) 
    {
        printf("Usted no ha seleccionado una opción correcta!");
        
    }
}