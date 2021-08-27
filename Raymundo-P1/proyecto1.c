/*
Autor: Raymundo Barrales Guadarrama

Función del programa.
Este programa imprime el número de la selección de un menú
con tres opciones
*/

#include <stdio.h>
int main(void)
{
    int opcion;
    printf("*****MENÚ*****\n");
    printf("1. Opción 1\n");
    printf("2. Opción 2\n");
    printf("3. Opción 3\n");
    scanf("%d", &opcion);
    if (opcion==1)
    {
        printf("Has seleccionado la opción 1\n");
    }
    if (opcion==2)
    {
        printf("Has seleccionado la opción 2\n");
    }
    if (opcion==3)
    {
        printf("Has seleccionado la opción 3\n");
    }
    if (opcion!=1 && opcion!=2 && opcion!=3)
    {
        printf("Has seleccionado una opción incorrecta\n");
    }
    return 0; 
}
