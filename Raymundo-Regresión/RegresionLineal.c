/***********************************************************************
 * Este programa realiza una regresión lineal de primer orden a
 * un conjunto de coordenadas (x, y) en un archivo data.txt con formato
 * CSV. El programa lee y guarda las abscisas "x" y las ordenadas "y" en 
 * registros separados para el cálculo de la pendiente m y la odenada al
 * origen b para el ajuste a la curva y = mx +b.
 * Autor: Raymundo Barrales
 * *********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char linea[100], ch, numero1[50], numero2[50];
    int linesCount,i,j=0,k=0;
    double  sumX=0, sumX2=0, sumY=0, sumXY=0, b, m;
    double *x, *y;

    /*Apuntador *datos al primer caracter del archivo data.txt*/
    FILE *datos=fopen("data.txt","r");

    /*Esta sección cuenta el número de lineas del archivo data.txt, es decir,
    el número de pares de datos (x,y) para realizar regresion, el numero
    de lineas se almacena en la variable linesCount y al finalizar
    el conteo se regresa a la línea 1 del archivo data.txt*/
    while((ch=fgetc(datos))!=EOF) {
      if(ch=='\n')
         linesCount++;
    }
    rewind(datos);

    /*Arreglos X y Y de tamaño dinámico*/
    x  = (double *)malloc(linesCount * sizeof(double));
    y  = (double *)malloc(linesCount * sizeof(double));

    /* Lee línea por línea del archivo data.txt; durante cada lectura, la línea
     se separa en dos cadenas de caracteres: numero 1 y numero2 al finalizar
     la lectura de una línea las cadenas numero 1 y numero 2 son convertidas
     a números de tipo double y almacenados en los arreglos x y y*/
    for (i = 0; i < linesCount; i++)
    {
        fgets(linea,100,datos);
        j=0;
        /*Se busca en la cadena caracteres 'linea' el caracter ',' que indica
        la separación de los datos, durante el recorrido se
        asignan los caracteres leidos a la cadena numero1*/
        while (linea[j]!=',')
        {
            numero1[j]=linea[j];
            j++;
        }
        k=0;
        j++;
        /*Una vez encontrada la cadena asociada al numero1, se continua la busqueda
        del caracter '\n' que indica el fin del segundo numero, durante el recorrido
        de búsqueda en linea, se van asignando los caracteres al arreglo numero2*/
        while (linea[j]!='\n')
        {
            numero2[k]=linea[j];
            j++;
            k++;
        }
        /*Las cadenas numero1 y numero2 son convertidas a 
        números flotantes y se agregan a los arreglos x y y respectivamente*/
        x[i] = atof(numero1);
        y[i] = atof(numero2);
    }

    /* x y y contienen los datos en formato double y con ellos se procede a calcular
    las sumatorias necesarias para la regresion lineal, se recorren los arreglos
    x y y desde la localidad 0 hasta la localidad linesCount*/
    for(i = 0; i < linesCount; i++)
    {
        sumX = sumX + x[i];
        sumX2 = sumX2 + x[i]*x[i];
        sumY = sumY + y[i];
        sumXY = sumXY + x[i]*y[i];
    }
     
    /* Con las sumatorias calculadas se procede a obtener el valor de m y b*/
    m = (linesCount*sumXY-sumX*sumY)/(linesCount*sumX2-sumX*sumX);
    b = (sumY - m*sumX)/linesCount;

    /*Al finalizar el progama se imprime en pantana los valores a y b obtenidos por el metodo de regresion */
    printf("Los resultados son: m = %0.3f y b= %0.3f",m,b);
    printf("\nLa ecuacion lineal es: y = %0.3fx + (%0.3f)",m,b);
    printf("\n\n");
    /*Se cierrra el archivo apuntado por *datos, en otras palabras el archivo datos..txt*/
    fclose(datos);
    return 0;
}
